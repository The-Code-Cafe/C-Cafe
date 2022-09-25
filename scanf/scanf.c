/*
    Copyright (c) 2022, The Code Cafe. All rights reserved.

    Take two numbers from the user using scanf() and print their values.

    Output:
    Enter value of x: 10
    Enter value of y: 20
    x: 10
    y: 20

*/

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("x: %d\ny: %d", x, y);
    return 0;
}