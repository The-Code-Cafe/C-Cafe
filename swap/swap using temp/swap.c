/*
    Copyright (c) 2022, The Code Cafe. All rights reserved.

    Swap the value of two variables using the third variable (temp).

    Output:
    Before swapping:
    x: 10, y: 20
    After swapping:
    x: 20, y: 10
*/

#include <stdio.h>

int main()
{
    int x = 10, y = 20, temp;
    printf("Before swapping:\nx: %d, y: %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping: \nx: %d, y: %d\n", x, y);
    return 0;
}