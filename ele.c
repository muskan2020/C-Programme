#include<stdio.h>
int main()
{
    char name[30];
    char id[10];
    float units ,bill;
    printf("enter the name");
    scanf("%s",&name);
    printf("enter the id");
    scanf("%s",&id);
    printf("enter the number of units cosumed");
    scanf("%f",&units);
    if(units>=0&&units<=200)
    {
        bill=units*1.00;
        printf("bill=%f\n",bill);

    }
    else if(units>=300&&units<200)
    {
        bill=units*1.50;
           printf("bill=%f\n",bill);

    }
    else if(units>=300&&units<)
    {
        bill=units*2.00;
       printf("bill=%f\n",bill);
    }
    else if(units>400&&units<=0)
    {
    bill=units*2.50+500.00;
   printf("bill=%f\n",bill);
    }




}
