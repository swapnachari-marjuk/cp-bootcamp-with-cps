// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c", 64 + j);
//         }
//         printf("\n");
//     }

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c", 64 + j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + i);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + i);
        }
        printf("\n");
    }

    return 0;
}

// result 1
/*

*
**
***
****
*****
****
***
**
*

*/

// result 2
/*
1
22
333
4444
55555
4444
333
22
1
*/

// result 3

/*
A
AB
ABC
ABCD
ABCDE
ABCD
ABC
AB
A
*/

// result 4
/*
A
BB
CCC
DDDD
EEEEE
DDDD
CCC
BB
A
*/