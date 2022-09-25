/*
    Copyright (c) 2022, The Code Cafe. All rights reserved.

    Compare two numbers using '<' (less than) relational operator.

    Explanation:
    Since 20 is greater than 10, the expression is true, and we get true (1) as a result.
    (remember: 1 = true, and 0 = false)
    therefore we get 1 as a output.
    If x = 10, and y = 20, then expression is false, as 10 is smaller than 20. therefore we get false (0) as a result.
    and we get 0 as a output.

    Output:
    1

*/

#include <stdio.h>

int main()
{
    int x = 20, y = 10;
    printf("%d", x > y);
    return 0;
}