#include<stdio.h>
int main()
{
    int i,j,k,a;
    printf("enter the number");
    scanf("%d",&k);
    for(i=1;i<=10;i++)//to print natural  numbers
    {
           //i=i+1;//to print even numbers
           a=k*i;//multiplication table
        printf("%d\n",a);
    }
}
