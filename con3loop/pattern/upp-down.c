#include <stdio.h>

int main()
{
    int n = 5;
    for (int row = n; row >= 1; row--)
    {
        for (int j = 1; j <= row; j++)
        {
            // printf("*");
            // printf("%d", row);
            // printf("%d", j);
            // printf("%c", 64 + j);
            // printf("%c", 64 + row);
            // printf("%d", row%2);
            printf("%d", j%2);
        }
        printf("\n");
    }

    return 0;
}

/*
1.
*****
****
***
**
*

2.
55555
4444
333
22
1

3.
12345
1234
123
12
1

4.
ABCDE
ABCD
ABC
AB
A

5.
EEEEE
DDDD
CCC
BB
A

6.
11111
0000
111
00
1

7.
10101
1010
101
10
1
*/