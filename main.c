#include <stdio.h>
#include <stdlib.h>
#include "code.h"

void printbinchar(char c)
{
    for (int i = 7; i >= 0; --i)
    {
        putchar((c & (1 << i)) ? '1' : '0');
    }
    // putchar('\n');
}

int main()
{
    // printf("%f\n", log10((double)32) / log10((double)2));
    int size;
    char *blocks = create_blocks(33, &size);
    printf("Amount of bytes: %d\n", size);
    for (int i = 0; i < size; i++)
    {
        // *(blocks + i) = 'A';
        printbinchar(*(blocks + i));
    }
    printf("\n");
    return 0;
}