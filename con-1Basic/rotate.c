#include <stdio.h>

int main()
{
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);


    int abc = (a-'0' * 100) + (b-'0' * 10) + c-'0';
    int bca = (b-'0' * 100) + (c-'0' * 10) + a-'0';
    int cba = (c-'0' * 100) + (b-'0' * 10) + a-'0';

    printf("%d, %d, %d", abc, bca, cba);
    return 0;
}