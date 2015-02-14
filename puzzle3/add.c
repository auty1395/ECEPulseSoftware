#include "puzzle3.h"

int ADD(char * st_text)
{
		char hash[HASH_LENGTH];

    encrypt(st_text, hash);
    return add_pass_to_file(hash);
}

