#include <stdio.h>

int main()
{
    long long a, b, x, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if (a <= k)
    {
        x = k - a;
        a = 0;

        printf("x = %lld, b = %lld\n", x, b);

        if (b <=x)
        {
            b = 0;
        }
        else
        {
            b = b - x;
        }
    }
    else
    {
        a = a - k;
    }

    printf("a = %lld b = %lld\n", a, b);

    return 0;
}