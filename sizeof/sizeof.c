/*
    Copyright (c) 2022, The Code Cafe. All rights reserved.

    Find how much size (in bytes) is allocated to different data types.

    Output:
    The size of char: 1 byte
    The size of int: 4 bytes
    The size of float: 4 bytes
    The size of double: 8 bytes
    The size of short: 2 bytes
    The size of long: 4 bytes
*/

#include <stdio.h>

int main()
{
    printf("The size of char: %d byte\n", sizeof(char));
    printf("The size of int: %d bytes\n", sizeof(int));
    printf("The size of float: %d bytes\n", sizeof(float));
    printf("The size of double: %d bytes\n", sizeof(double));
    printf("The size of short: %d bytes\n", sizeof(short));
    printf("The size of long: %d bytes\n", sizeof(long));
    return 0;
}