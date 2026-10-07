#include <stdio.h>

int main()
{
    int A, N;
    scanf("%d %d", &N, &A);

    int rmndr = N % 500;

    if (rmndr <= A)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}