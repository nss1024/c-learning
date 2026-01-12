

#include <stdio.h>

typedef enum {
    STATE_NONE,
    STATE_HELO,
    STATE_FROM,
    STATE_MAIL,
    STATE_RCPT,
    STATE_DATA,
    STATE_QUIT
} SmtpState;

typedef struct {
    SmtpState state;
} SmtpContext;

void processHelo(SmtpContext*c) {
    c->state=STATE_HELO;
    printf("%s\n", "HELO received!");
    printf("%s\n", "Current state: ");
    printf("%s\n", c->state);
}

void processMail() {
    printf("%s\n", "MAIL received!");
}

void processFrom() {
    printf("%s\n", "From received! Updated context, added from address, sender IP, sender port, sender domain!");
}

void processRcpt() {
    printf("%s\n", "Rcpt received! Updated context, added rcpt to list!");
}

void processData() {
    printf("%s\n", "Data received! Updated context, added data !");
}

void processQuit() {
    printf("%s\n", "Quit received! Updated context, terminating session!");
}

void handleUnknown() {
    printf("%s\n", "Unknown state received! Sending error!");

}


int main()
{
    struct SmtpContext context = {STATE_NONE};
    SmtpState s = 0;

    switch (s) {
    case STATE_HELO:
        processHelo(context);
        break;
    case STATE_MAIL:
        processMail();
        break;
    case STATE_FROM:
        processFrom();
        break;
    case STATE_RCPT:
        processRcpt();
        break;
    case STATE_DATA:
        processData();
        break;
    case STATE_QUIT:
        processQuit();
        break;
    default:
        break;
    }


}

