import signal
import time

def sig_handler(signo, frame):
    print("frame=", frame)
    if signo == signal.SIGALRM:
        print("Exiting program after 2 seconds")
        raise OSError("0")

print(__name__)
if __name__ == "__main__":
    print(__name__, "The alarm() function sends a signal to the process after a specified number of seconds.")
    print(dir(signal.Signals))
    ret = signal.signal(signal.SIGALRM, sig_handler) # == signal.SIG_ERR:
    #    raise OSError("Unable to catch SIGALRM")
    print("ret=", ret)

    print("# Set an alarm for 2 seconds")
    signal.alarm(2)

    print("# Run program in deamon mode")
    while True:
        # Do something here
        time.sleep(1)
