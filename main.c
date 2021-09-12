#include <stdio.h>
#include <stdlib.h>
#include "code.h"

void printbinchar(char c)
{
    for (int i = 7; i >= 0; --i)
    {
        putchar((c & (1 << i)) ? '1' : '0');
    }
}

int main()
{
    // int data_size = 4; // We can store 4 bytes
    // int block_size;    // How much storage everything is going to take
    // // Create blocks of 8 bit chars to fit in the data
    // char *blocks = create_blocks(data_size * 4, &block_size);
    // for (int i = 0; i < block_size; i++)
    // {
    //     printbinchar(*(blocks + i));
    // }
    // printf("\n");

    // char data[] = {'A', 'B', 'C', 'D'};
    // int error_code = put_data(&data[0], data_size, blocks, block_size);

    char test = 'B';
    printf("%d\n", (int)test);
    printf("%d\n", check_parity(test));

    return 0;
}