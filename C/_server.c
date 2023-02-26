use std::io::{Read, Write};
use std::sync::Arc;

use rustls::Session;
use webpki::DNSNameRef;

fn main() {
    // Set up server configuration.
    let server_config = Arc::new(rustls::ServerConfig::new(rustls::NoClientAuth::new()));

    // Set up client configuration.
    let mut client_config = rustls::ClientConfig::new();
    client_config.root_store.add_server_trust_anchors(&webpki_roots::TLS_SERVER_ROOTS);
    let client_config = Arc::new(client_config);

    // Establish a TCP connection between the server and client.
    let listener = std::net::TcpListener::bind("127.0.0.1:8443").unwrap();
    for stream in listener.incoming() {
        let mut stream = stream.unwrap();
        let client_config = client_config.clone();
        let server_config = server_config.clone();
        std::thread::spawn(move || {
            // Create server and client sessions.
            let mut server_session = rustls::ServerSession::new(&server_config);
            let mut client_session = rustls::ClientSession::new(&client_config, DNSNameRef::try_from_ascii_str("localhost").unwrap());

            // Use the server session to perform the handshake.
            let mut server_buffer = rustls::StreamOwned::new(&mut server_session, &mut stream);
            server_buffer.read(&mut [0; 1024]).unwrap();
            server_buffer.write_all(b"HTTP/1.1 200 OK\r\n\r\n").unwrap();
            server_buffer.flush().unwrap();
            server_buffer.write_all(b"Hello, world!").unwrap();
            server_buffer.flush().unwrap();
            server_buffer.shutdown().unwrap();

            // Use the client session to read the server's response.
            let mut client_buffer = rustls::StreamOwned::new(&mut client_session, &mut stream);
            let mut response = Vec::new();
            client_buffer.read_to_end(&mut response).unwrap();
            println!("{}", String::from_utf8_lossy(&response));
        });
    }
}
