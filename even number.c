#include<stdio.h>
int main()
{
    int n=20,i,sum=0;
    printf("enter");
    //scanf("%d",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("%d\n %d",n,sum);


}
