#include "code.h"

char *create_blocks(int n, int *size)
{
    int unused_bits = (8 - (n % 8));
    if (n % 8 != 0)
    {
        // If this is true, we need to make sure n is valid
        n = n + (8 - (n % 8));
    }

    int parity_bits_needed = log10((double)n) / log10((double)2);
    printf("Parity bits needed: %d\n", parity_bits_needed);

    *size = n / 8;

    char *blocks = (char *)malloc(8 * (n / 8));
    return blocks;
}
