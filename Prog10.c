//Calculator:
#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter number1:\n");
    scanf("%d",&a);
    printf("Enter number2:\n");
    scanf("%d",&b);
    printf("Enter operator {+,-,*,/}:\n");
    scanf(" %c",&c);
    if(c=='+')
    printf("Result=%d",a+b);
    else if(c=='-')
    printf("Result=%d",a-b);
    else if(c=='*')
    printf("Result=%d",a*b);
    else
    printf("Result=%f",(float)a/b);
}

