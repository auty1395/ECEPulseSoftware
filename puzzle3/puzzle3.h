<<<<<<< HEAD
#define TRUE 1
#define FALSE 0

int ADD(char * st_text);
int DELETE(char * st_text);
int PASS(char * st_text);
=======
#ifndef _PUZZLE3_H_
#define _PUZZLE3_H_

#include <math.h>
#include <stdio.h>
#include <openssl/md5.h>
#include <string.h>
#include <stdlib.h>


typedef unsigned char bool;

bool add_pass_to_buf(char *);
bool remove_pass_from_buf(char *);
bool pass_exists_in_file(char *);

void encrypt(char *)
int ADD(char *);
int DELETE(char *);
int PASS(char *);



#endif
>>>>>>> 3c47026c711c43b89d85836787472dfb45783506
