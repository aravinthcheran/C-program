//to write a file in a structure and read it in a seperate structure
#include<stdio.h>
struct employee
{
    char name[50];
    int id;
};
int main()
{
    struct employee e[3]={{"Rahul",1},{"Rohit",2},{"Raj",3}};
    struct employee e1[3];
    FILE *fptr;
    //printf("The name of the employee is: %s\nId is:%d",e.name,e.id);
    fptr=fopen("test1.bin","wb");
    fwrite(&e,sizeof(e),3,fptr);
    fclose(fptr);
    fptr=fopen("test1.bin","rb");
    fread(&e1,sizeof(e1),3,fptr);
    fclose(fptr);
    for(int i=0;i<3;i++)
    {
        printf("The name of the employee is: %s\nId is:%d\n",e1[i].name,e1[i].id);
    }

}