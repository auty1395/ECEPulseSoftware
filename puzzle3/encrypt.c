#include <openssl/md5>
#include <string.h>


int encrypt(char* str, char* hash)
{
	MD5(str, strlen(str), hash);
	return 0;
}

