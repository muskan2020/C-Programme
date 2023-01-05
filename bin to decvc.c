#include<stdio.h>
#include<math.h>
int main()
{
    float arr[5]={12.2,3.33,14.5,23.5,7.8};
    float sum;
    float deviation;
    float variance;
    float mean;
    int i=0;
    for(i=0;i<5;i++)
       sum=sum+arr[i];
       mean=sum/5;
       sum=0;
       for(i=0;i<5;i++)
       {
           sum=sum+pow((arr[i]-mean),2);

       }
       variance=sum/5;
       deviation=sqrt(variance);
       printf("%.2f\n",mean);
       printf("%.2f\n",variance);
       printf("%.2f\n",deviation);



}
