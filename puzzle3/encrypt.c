#include "encrypt.h"

char *encrpyt(char *str)
{
    char key[] = "+~:g)34#8@3jW3W";
    printf("%s", str);
    return 0;
    int len = strlen(str);

    int keylen = strlen(key);
    for (int i = 0, j = 0; i < len; i++, j++)
    {
        if (j > keylen) j = 0;
        printf("%c", key[j]);
        break;
        str[i] += key[j];
    }

    return str;
}

char *decrypt(char *str)
{

}