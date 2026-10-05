// #include <stdio.h>
// #include <math.h>

// int main() {
//     int a, b, x;
//     scanf("%d %d", &a, &b);
//     x = pow(a, b);
//     printf("%d", x);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int b, p;
    scanf("%d %d", &b, &p);
    int x = b;

    for (int i = 1; i < p; i++)
    {
        x = x * b;
    }
    printf("%d\n", x);
    return 0;
}