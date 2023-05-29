#include<stdio.h>
struct employee
{
    char name[50];
    int id;
};
int main()
{
    struct employee e={.name="Rahul",.id=1};
    printf("The name of the employee is: %s\nId is:%d",e.name,e.id);
}