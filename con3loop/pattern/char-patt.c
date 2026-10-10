#include <stdio.h>

int main() {
    int n = 5;

    for (int row = 1; row < n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
           printf("%c", col+64);
        }
        printf("\n");
    }
    
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n = 5;
//     for (int row = 1; row <=n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%c", row+64);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }