#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "abstraction.h"

struct assimilation {
  char master[30];
  char respective[30];
};

Assimilation* createAssimilation() {
  Assimilation* returnAssimilation = (Assimilation*)malloc(sizeof(Assimilation));
  
  return returnAssimilation;
}

int createEncryption(Assimilation* mainly) {
  srand(time(0));
  int counter = 0, firstletter = 'A';
  char mark[26];

  for(int i = 0; i < 26;i++) {
    mainly->master[i] = 'A' + i;
  }

  while(1){
    int random = rand() % 26, check = 0;

    if(counter == 26){
      break;
    }
    
    //Need to improve the finding of the letters that already is used, this is too slow,
    //I think I can solve this by doing a indexing vector
    for(int i = 0;i < counter;i++) {
      if(mark[i] == firstletter + random) {
        check = 1;
        break;
      }
    }

    if(check == 0) {
      mark[counter] = firstletter + random;
      counter++;
    }

  }

  for(int i = 0;i < 26;i++) {
    mainly->respective[i] = mark[i];
  }

  return 1;
}

void encryptMessage(Assimilation* mainly, char* message[100]) {
  char newMessage[100];
  for(int i = 0;i < strlen(message);i++) {
    newMessage[i] = mainly->respective[mainly->master[i] - 65];
  }

  strcpy(*message, newMessage)
}
