#include <stdio.h>
#define PI 3.14
int main()
{
    float temp,cel,farenh;
    int choice;
    printf("Enter choice:\n1.Input temp. in Cel. value.\n");
    printf("2.Input temp. in Faren. value.\n");
    scanf("%d",&choice);
    scanf("%f",&temp);
    if(choice==1){
        farenh=(9*temp)/5.0+32;
        printf("Temp in Farenheit = %f\n",farenh);
    }
    if(choice==2){
        cel=(5)*(temp-32)/9.0;
        printf("Temp in Celsius = %f\n",cel);
    }
    
    return 0;
}
