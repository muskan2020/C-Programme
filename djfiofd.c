#include<stdio.h>
int avg(int[],int);
int main()
{
    int marks[5]={1,2,3,4,5};
    int size;
    int k=sizeof(marks);
    printf("%d\n",k);
    size=sizeof(marks)/sizeof(marks[1]);
    printf("%d\n",size);
    int average;
    average=avg(marks,5);

    printf("%d",average);
}
int avg(int marks[],int a)
{
    int i,sum=0,average;
     for(i=0;i<5;i++)
        {
            sum=sum+marks[i];
         }
         average=sum/a;
         return average;
}
