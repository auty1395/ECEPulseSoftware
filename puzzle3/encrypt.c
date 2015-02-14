#include <openssl/md5.h>
#include <string.h>

int encrypt(char* str, char* hash)
{
	int i;
	unsigned char temp;
	unsigned char temphash[16];
	MD5((unsigned char *) str, strlen(str), temphash);

	//convert to ascii hex
	for(i=0; i<16; i++)
	{
		//hex for high bits
		temp = temphash[i]>>4;
		temp = temp & 0xF;
		if(temp > 9)
			*(hash + 2*i) = 'A' + (temp-10);
		else
			*(hash +2*i)  = '0' + (temp);

		//hex for low bits
		temp = temphash[i]&0xF;
		if(temp > 9)
			*(hash +2*i+1)  = 'A' + (temp-10);
		else
			*(hash +2*i+1)  = '0' + (temp);
	}
	*(hash + 32) = '\n';
	return 0;
}

