#include <stdio.h>
#include "main.h"

int main(void)
{
    int num;

    num = get_endianness();
    if (num != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
