#include<stdio.h>
int replace_nbits(int,int,int);
int main()
{
    int num,n,val,res=0;
    printf("enter the num,n and val");
    scanf("%d %d %d",&num,&n,&val);
    res=replace_nbits(num,n,val);
    printf("%d",res);
}
int replace_nbits(int num,int n, int val)
{
    int res=(val&((1<<n)-1))|(num&~((1<<n)-1));
    return res;
}
