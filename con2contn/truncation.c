#include <stdio.h>
#include <math.h>

int main()
{
    long long n, x;
    scanf("%lld", &n);

    if (n <= 9999)
    {
        x = (n / 10) * 10;
    }
    else if (n <= 99999)
    {
        x = (n / 100) * 100;
    }
    else if (n <= 999999)
    {
        x = (n / 1000) * 1000;
    }
    else if (n <= 9999999)
    {
        x = (n / 10000) * 10000;
    }
    else if (n <= 99999999)
    {
        x = (n / 100000) * 100000;
    }
    else if (n <= 999999999)
    {
        x = (n / 1000000) * 1000000;
    }

    printf("%lld\n", x);
    return 0;
}