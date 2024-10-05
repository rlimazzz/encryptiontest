#ifndef ENCRYPTION_H
#define ENCRYPTION_H

typedef struct Assimilation Assimilation; 

Assimilation* createAssimilation();

int createEncryption(Assimilation* mainly);

void encryptMessage(Assimilation* mainly, char* message);

#endif // ENCRYPTION_H
