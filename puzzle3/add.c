#include "puzzle3.h"

int ADD(char * st_text)
{
	char hash[HASH_LENGTH];

    encrypt(st_text, hash);
    if (!pass_exists_in_file(hash)) add_pass_to_file(hash);
    else printf("Password is already stored.\n> ");
    return TRUE;
}

