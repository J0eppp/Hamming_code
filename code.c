#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "code.h"

char *create_blocks(int n, int *size)
{
    int unused_bits = (8 - (n % 8));
    if (n % 8 != 0)
    {
        // If this is true, we need to make sure n is valid
        n = n + (8 - (n % 8));
    }

    int parity_bits_needed = log2((double)n);

    *size = n / 8;

    char *blocks = (char *)malloc(8 * (n / 8));
    return blocks;
}

int check_parity(char data)
{
    int n = 0;
    // Check the last 7 bits
    for (int i = 1; i < 8; i++)
    {
        printf("%d\n", ((data + i) & (1 << i)) ? 1 : 0);
        n += ((data + i) & (1 << i)) ? 1 : 0;
    }
    printf("parity_n value: %d\n", n);
    return n % 2;
}

int put_data(char *data, int n, char *blocks, int size_blocks)
{

    return 0;
}