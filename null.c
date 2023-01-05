#include<stdio.h>
int main ()
{
 int a[100],n,elements,res=0;
 int i;
 printf("enter the array size");
 scanf("%d",&n);
 printf("enter the array elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the  array elements to search");
 scanf("%d",&elements);
    for(i=0;i<n;i++)
 {
     if(a[i]==elements)
     {
         printf("%d\n",elements);
     }
 }
 printf("%d\n",elements);

}
