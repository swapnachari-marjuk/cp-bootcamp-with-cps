#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int powB = pow(a, b);
    int powA = pow(b, a);
    
    printf("%d\n", powA + powB);
    return 0;
}