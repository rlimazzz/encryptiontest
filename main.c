#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "implementation_abstraction.c"

int main() {
  Assimilation* test;
  char messageToEncrypt[100];
  test = createAssimilation();

  createEncryption(test);


  //I dont know why is just generating it one time, and when I compile it and execute again it doesnt generate another sequence!!
  for(int i = 0;i < 26;i++) {
    printf("%c,", test->master[i]);
  } 
  printf("\n");

  for(int i = 0;i < 26;i++) {
    printf("%c,", test->respective[i]);
  }

  scanf("%s", messageToEncrypt);

  strcpy(messageToEncrypt, *encryptMessage(test, messageToEncrypt));

  printf("\n");
      

  return 0;
}
