#ifndef CODE_H
#define CODE_H
#include <math.h>
#include "code.c"

/*
* @param n [int] the amount of bits the message will contain
* @param size [*int] the amount of bytes returned
*/
char *create_blocks(int n, int *size);
#endif