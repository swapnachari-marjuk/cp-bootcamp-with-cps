// my solution
#include <stdio.h>

int main()
{
    char sqr1, sqr2, sqr3;
    scanf("%c%c%c", &sqr1, &sqr2, &sqr3);

    // 3*1 == 147 || 2*1, 1 0 = 146 || 1*1, 2*0 =  145
    int total = sqr1 + sqr2 + sqr3;

    if (total == 147)
    {
        printf("%d\n", 3);
    }
    else if (total == 146)
    {
        printf("%d\n", 2);
    }
    else if (total == 145)
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }

    return 0;
}


// AI suggested solve 
// #include <stdio.h>

// int main() {
//     char sqr1, sqr2, sqr3;
//     scanf("%c%c%c", &sqr1, &sqr2, &sqr3);   
//     int total = (sqr1 - '0') + (sqr2 - '0') + (sqr3 - '0');
//     printf("%d\n", total);  
//     return 0;
// }