#include<stdio.h>

struct student
{
    char name[50];    //structure members
    char rollno[10];  //different data types can be used
    int age;       
    char phonenumber[10];
    float marks[6];
};
int main()
{
    struct student s1;//structure members can only be acccessed by a structure variable using the dot operator
    printf("Enter the name of the student:");
    scanf("%s",&s1.name);
    printf("Enter the roll no. of the student:");
    scanf("%s",&s1.rollno);
    printf("Enter the age of the student:");
    scanf("%d",&s1.age);
    printf("Enter the phone number of the student:");
    scanf("%s",&s1.phonenumber);
    printf("Enter the marks of the student:");
    for(int i=0;i<6;i++)
    {
        printf("Enter the marks of subject %d:",i+1);
        scanf("%f",&s1.marks[i]);
    }
    printf("The details of the student are:\n");
    printf("Name:%s\n",s1.name);
    printf("Roll no.:%s\n",s1.rollno);
    printf("Age:%d\n",s1.age);
    printf("Phone number:%s\n",s1.phonenumber);
    printf("Marks:");
    float avg;
    for(int i=0;i<6;i++)
    {
        printf("Subject %d:%f\n",i+1,s1.marks[i]);
        avg+=s1.marks[i];
    }
    printf("\nAverage marks:%f\n",avg/6);
}