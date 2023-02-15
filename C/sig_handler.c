// In this example, the alarm() function is used to set an alarm for 2 seconds. 
// The sig_handler() function is used to handle the SIGALRM signal and gracefully exit the program after 2 seconds. 
// The program runs in a while loop in daemon mode, and you can add any code you want to run in the loop. 
// The sleep(1) function is used to pause the program for 1 second.

#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void sig_handler(int signo) {
    if (signo == SIGALRM) {
        printf("Exiting program after 2 seconds\n");
        exit(0);
    }
}

int main() {
    if (signal(SIGALRM, sig_handler) == SIG_ERR) {
        perror("Unable to catch SIGALRM");
        return 1;
    }

    // Set an alarm for 2 seconds
    alarm(2);

    // Run program in daemon mode
    while(1) {
        // Do something here
        sleep(1);
    }

    return 0;
}
