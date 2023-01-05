#include<stdio.h>
int reverse_fun(int);
sum=0,rem;
int main()
{
    int num,reverse_number;
    printf("enter the number");
    scanf("%d",&num);
    reverse_number=reverse_fun(num);
    printf("%d",reverse_number);
}
int reverse_fun(int n)
{
    if(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        reverse_fun(n/10);
    }
    else
        return n;
    return sum;
}
