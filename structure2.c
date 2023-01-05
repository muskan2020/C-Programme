#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};

int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        scanf("%s%d%f",&s[i].name,&s[i].rollno,&s[i].marks);
    }

        for(int i=0;i<3;i++)
        {
            printf("%s %d %f",s[i].name,s[i].rollno,s[i].marks);
        }

}

