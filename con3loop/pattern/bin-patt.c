
// #include <stdio.h>

// int main()
// {
//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int col = 1; col <= i; col++)
//         {
//             // ekhane col er man print hobe.ja muloto 1->i porjonto.
//             printf("%d", col%2);
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
        for (int col = 1; col <= i; col++)
        {
            // ekhane col er man print hobe.ja muloto 1->i porjonto.
            printf("%d", i%2);
        }
        printf("\n");
    }

    return 0;
}


