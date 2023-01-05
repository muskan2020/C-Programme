#include<stdio.h>
//int sum(int,int);
int sum()
{
    int a,b,sum=0;
    printf("enter");
    scanf("%d",&a);
    printf("enter");
    scanf("%d",&b);
    sum=a+b;
    printf("%d\n",sum);
}
void main()
{
    int t=0;
    sum();
    sum();
    sum();
    int x=40,y=89;
    t=x+y;
    printf("%d",t);

}
