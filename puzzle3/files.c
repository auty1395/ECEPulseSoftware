#include "files.h"

bool add_pass_to_buf(char *str)
{
    static char file[] = "passwords.txt";

    FILE *fp = fopen(file, 'a');
    int len = strlen(str);

    if (fp == NULL)
    {
        printf("Add: There was an error opening the file\n");
        return FALSE;
    }

    fwrite(str, len, 1, fp);
    fclose(fp);
    return TRUE;

}