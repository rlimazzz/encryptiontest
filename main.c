#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "encryption.h"

int main() {
    char messageToEncrypt[100] = "HELLO WORLD";
    Assimilation* test = createAssimilation();
        
    createEncryption(test);
    
    printf("Original Message: %s\n", messageToEncrypt);
    
    encryptMessage(test, messageToEncrypt);
    
    printf("Encrypted Message: %s\n", messageToEncrypt);
    
    free(test);

    return 0;
}
