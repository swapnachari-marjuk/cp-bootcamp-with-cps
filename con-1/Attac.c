#include <stdio.h>

int main()
{
    long long a, b, ans;
    scanf("%lld %lld", &a, &b);
    ans = (a + b - 1) / b; //by using simple law.
    printf("%lld\n", ans);
    return 0;
}

// int main()
// {
//     long long a, b, ans;
//     scanf("%lld %lld", &a, &b);

//     //by using condition 
//     if (a % b == 0)
//     {
//         ans = a / b;
//     }
//     else if (a % b == !0)
//     {
//         ans = a / b + 1;
//     }

//     printf("%lld\n", ans);
//     return 0;
// }
