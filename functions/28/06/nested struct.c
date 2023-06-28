#include<stdio.h>
struct point
{
    int latitude,longitude;
};
struct address
{
    int doorno,pincode;
    char street[20],city[20],state[20];
    struct point l;
};
struct student
{
    char name[50],rollno[20];
    struct address a;
}s;
int gets(struct student *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the student:")  ;
        fgets((p+i)->name,50,stdin);
        printf("Enter the rollno of the student:");
        scanf("%s",(p+i)->rollno);
        printf("Enter the doorno of the student:");
        scanf("%d",(p+i)->a.doorno);
        printf("Enter the street of the student:");
        scanf("%s",(p+i)->a.street);
        printf("Enter the city of the student:");
        scanf("%s",(p+i)->a.city);
        printf("Enter the state of the student:");
        scanf("%s",(p+i)->a.state);
        printf("Enter the pincode of the student:");
        scanf("%d",(p+i)->a.pincode);
        printf("Enter the latitude of the student:");
        scanf("%d",(p+i)->a.l.latitude);
        printf("Enter the longitude of the student:");
        scanf("%d",(p+i)->a.l.longitude);
    }
}
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student s[n];
    gets(s,n);
    //printf("Menu");
    

}