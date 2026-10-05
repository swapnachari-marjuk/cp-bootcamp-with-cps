#include <stdio.h>

int main()
{
    int a, b, perimeter, area;
    scanf("%d %d", &a, &b);
    perimeter = 2 * (a + b);
    area = a * b;

    printf("%d, %d", perimeter, area);

    return 0;
}