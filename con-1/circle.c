#include <stdio.h>

#define PI 3.141592653589
int main()
{
    double r, area, circumference;

    scanf("%lf", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;
    
    printf("%.5f %.5f\n", area, circumference);
    return 0;
}