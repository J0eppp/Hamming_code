#ifndef CODE_H
#define CODE_H
#include "code.c"

/*
* @param n [int] the amount of bits the message will contain
* @param size [*int] the amount of bytes returned
*/
char *create_blocks(int n, int *size);

/*
* @param data [*char] the data that needs to be stored
* @param n [int] the size of the data in bytes
* @param blocks [*char] the blocks that the data will be stored in
* @param size_blocks [int] the size of the block
*
* @return [int] the error code
*/
int put_data(char *data, int n, char *blocks, int size_blocks);

/*
* @param data [char] the byte that needs to be checked
* 
* @return [int] returns the value the parity bit should be
*/
int check_parity(char data);
#endif