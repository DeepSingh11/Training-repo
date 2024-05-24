//BMI:
#include<stdio.h>
int main()
{
    float weight,height,bmi;
    printf("Enter weight in kgs:\n");
    scanf("%f",&weight);
    printf("Enter height in m:\n");
    scanf("%f",&height);
    bmi=weight/(height*height);
    printf("%f",bmi);
    if(bmi>30)
    printf("Obesity\n");
    else if(bmi>25 && bmi<29.9)
    printf("Normal weight\n");
    else if(bmi>18.5 && bmi<24.9)
    printf("Overweight.\n");
    else
    printf("Underweight\n");
    return 0;
}

