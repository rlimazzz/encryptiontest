#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "encryption.h"

struct Assimilation {
    char master[26];
    char respective[26];
};

Assimilation* createAssimilation() {
    Assimilation* mainly = (Assimilation*)malloc(sizeof(Assimilation));
    return mainly;
}

int createEncryption(Assimilation* mainly) {
    srand(time(0));
    int counter = 0, firstletter = 'A';
    char mark[26];

    for(int i = 0; i < 26; i++) {
        mainly->master[i] = 'A' + i;
    }

    while (counter < 26) {
        int random = rand() % 26;
        int alreadyUsed = 0;

        for(int i = 0; i < counter; i++) {
            if (mark[i] == firstletter + random) {
                alreadyUsed = 1;
                break;
            }
        }

        if (!alreadyUsed) {
            mark[counter] = firstletter + random;
            counter++;
        }
    }

    for (int i = 0; i < 26; i++) {
        mainly->respective[i] = mark[i];
    }

    return 1;
}

void encryptMessage(Assimilation* mainly, char* message) {
    char newMessage[100];
    
    for (int i = 0; i < strlen(message); i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            newMessage[i] = mainly->respective[message[i] - 'A'];
        } else {
            newMessage[i] = message[i];
        }
    }

    newMessage[strlen(message)] = '\0';
    strcpy(message, newMessage);
}
