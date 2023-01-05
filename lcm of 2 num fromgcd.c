#include<stdio.h>
int main()
{
    int num1,num2,i,gcd,LCM;
    printf("enter the positive number");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=num1&&i<=num2;++i)
    {
        if(num1%i==0&&num2%i==0)
        {
            gcd=i;
        }
    }
        LCM=(num1*num2)/gcd;
        printf("%d",LCM);
        return 0;

}
