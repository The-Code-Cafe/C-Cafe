/*
    Copyright (c) 2022, The Code Cafe. All rights reserved.

    Swap the value of two variables without the third variable (temp).

    Output:
    Before swapping:
    x: 10, y: 20
    After swapping:
    x: 20, y: 10
*/

#include <stdio.h>

int main()
{
    int x = 10, y = 20;
    printf("Before swapping:\nx: %d, y: %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping: \nx: %d, y: %d\n", x, y);
    return 0;
}