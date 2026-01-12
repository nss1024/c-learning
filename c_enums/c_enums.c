

#include <stdio.h>
#include <stdlib.h>

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

void processHelo(SmtpContext *c) {
    c->state=STATE_HELO;
    printf("%s\n", "HELO received!");    
    printf("Current state:  %d\n", c->state);
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
    SmtpContext* context = malloc(sizeof(SmtpContext));
    if (context == NULL) {
        fprintf(stderr, "malloc failed\n");
        exit(1);
    }
    context->state = STATE_NONE;
    SmtpState s = 1;

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
    free(context);
    return 0;
}

