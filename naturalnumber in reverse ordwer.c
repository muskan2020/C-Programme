#include<stdio.h>
int main()
{
    int n,i;
    printf("enter");
    scanf("%d",&n);
    printf(" print number %d to 1\n",n);
    for(i=n;i>0;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
