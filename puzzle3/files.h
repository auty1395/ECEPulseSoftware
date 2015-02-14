#ifndef _FILES_H_
#define _FILES_H_

#include <stdlib.h>
#include <stdio.h>

typedef unsigned char bool;

bool add_pass_to_buf(char *);
bool remove_pass_from_buf(char *);
bool pass_exists_in_file(char *);

#endif