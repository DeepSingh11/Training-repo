#include <stdio.h>
#define PI 3.14
int main()
{
    float radius;
    float area;
    float circumference;
    printf("Enter Radius value:\n");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circumference=2*PI*radius;
    printf("Area of circle= %f sq.m.\n",area);
    printf("Circumference of circle= %f m.",circumference);
    return 0;
}
