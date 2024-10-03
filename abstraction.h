typedef struct assimilation Assimilation;

Assimilation * createAssimilation();

int createEncryption(Assimilation* mainly);

char encryptMessage(Assimilation* mainly, char message[]);
