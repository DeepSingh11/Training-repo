//program to find largest of three numbers
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three nos.:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if(num1>num2 && num1>num2){
        printf("num1 is greatest");
    }
    else if(num2>num3 && num2>num1){
        printf("num2 is greatest");
    }
    else{
        printf("num2 is greatest");
    }
    
}

