#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && b <= c)
    {
        printf("%d %d %d\n", a, b, c);
    }
    else if (a <= c && c <= b)
    {
        printf("%d %d %d\n", a, c, b);
    }
    else if (b <= a && a <= c)
    {
        printf("%d %d %d\n", b, a, c);
    }
    else if (b <= c && c <= a)
    {
        printf("%d %d %d\n", b, c, a);
    }
    else if (c <= a && a <= b)
    {
        printf("%d %d %d\n", c, a, b);
    }
    else if (c <= b && b <= a)
    {
        printf("%d %d %d\n", c, b, a);
    }

    return 0;
}


// both are solved by AI :) but first one is tried by me at first btw. (:

// #include <stdio.h>

// int main()
// {
//     int a, b, c, temp;
//     scanf("%d %d %d", &a, &b, &c);

//     // যদি a, b এর চেয়ে বড় হয়, তবে তাদের জায়গা বদল করব
//     if (a > b) {
//         temp = a;
//         a = b;
//         b = temp;
//     }
    
//     // যদি b, c এর চেয়ে বড় হয়, তবে তাদের জায়গা বদল করব
//     if (b > c) {
//         temp = b;
//         b = c;
//         c = temp;
//     }
    
//     // b আর c বদলানোর পর আবার চেক করতে হবে a, b এর চেয়ে বড় হয়ে গেল কি না
//     if (a > b) {
//         temp = a;
//         a = b;
//         b = temp;
//     }

//     // এখন a, b, c অটোমেটিক ছোট থেকে বড় ক্রমে সাজানো থাকবে
//     printf("%d %d %d\n", a, b, c);

//     return 0;
// }
