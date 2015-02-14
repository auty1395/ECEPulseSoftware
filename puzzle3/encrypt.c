#include "encrypt.h"

void encrypt(char *str)
{
    unsigned char c[MD5_DIGEST_LENGTH];
    MD5_CTX context;
    MD5_Init(&context);

    int size = strlen(str);
    char * newstr = malloc(size);

    strcpy(newstr, str);

    MD5_Update(&context, newstr, size);
    MD5_Final(c, &context);

    for (int i = 0; i < MD5_DIGEST_LENGTH; i++)
    {
        printf("%02x", c[i]);
    }
}