#include<stdio.h>
int main()
{
    float temp;
    printf("enter");
    scanf("%f",&temp);
    if(temp>30)
    {
        printf("hot");

    }
    else if(temp<=10)
    {
        printf("cold");
    }
    else
        printf("normal");
}
