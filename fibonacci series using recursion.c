#include<stdio.h>
int fibonacci_series(int);
int main()
{
    int count,c=0,i;
    printf("enter the series");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        printf("%d",fibonacci_series(c));
        c++;
    }
    return 0;
}
    int fibonacci_series(int num)
    {
        if(num == 0)
            return 0;
        else if(num == 1)
            return 1;
        else
            return (fibonacci_series(num-1)+ fibonacci_series(num-2));
    }


