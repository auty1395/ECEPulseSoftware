#ifndef _PUZZLE3_H_
#define _PUZZLE3_H_

#include <math.h>
#include <stdio.h>
#include <openssl/md5.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define HASH_LENGTH  33
typedef unsigned char bool;

bool add_pass_to_file(char *);
bool remove_pass_from_file(char *);
bool pass_exists_in_file(char *);

int encrypt(char *, char*);
int ADD(char *);
int DELETE(char *);
int PASS(char *);
char lower(char);


#endif
