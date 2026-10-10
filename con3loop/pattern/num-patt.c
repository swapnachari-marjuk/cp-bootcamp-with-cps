#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int col = 1; col <= i; col++)
        {
            // ekhane col er man print hobe.ja muloto 1->i porjonto.
            printf("%d", col);
        }
        printf("\n");
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n = 5;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d", row); // ekhane row er man print hobe. ja muloto 1 -> row porjonto.
//         }
//         printf("\n");
//     }

//     return 0;
// }
