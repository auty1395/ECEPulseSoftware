#include <openssl/md5.h>
#include <string.h>
#include "puzzle3.h"

int encrypt(char* str, char* hash)
{
	MD5(str, strlen(str), hash);
	return 0;
}

