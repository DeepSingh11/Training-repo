#include<stdio.h>
#include<math.h>
int main(){
    
    int num,rem,sum=0,i=0;
    printf("Enter no. in binary:\n");
    scanf("%d",&num);
    while(num){
        rem=num%10;
        if(rem==1)
        sum+=rem*pow(2,i);
        i+=1;
        num=num/10;
    }
    printf("%d",sum);
}
