#include<stdio.h>
int extract_nbits(int ,int);
int main()
{
    int num,n,res=0;
    printf("enter the num and n");
    scanf("%d %d",&num ,&n);
    res=extract_nbits(num,n);
    printf("%d\n",res);

}
int extract_nbits(int num,int n)
{
    int res=num&((1<<n)-1);
    return res;
}
