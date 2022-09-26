/*
    Copyright (c) 2022, The Code Cafe. All rights reserved.

    Compare two numbers using '<' (less than) relational operator.

    Explanation:
    Since 10 is less than 20, the expression is true, and we get true (1) as a result.
    (remember: 1 = true, and 0 = false)
    therefore we get 1 as a output.
    If x = 20, and y = 10, then expression is false, we get false (0) as a result.
    and we get 0 as a output.

    Output:
    1

*/

#include <stdio.h>

int main()
{
    int x = 10, y = 20;
    printf("%d", x < y);
    return 0;
}