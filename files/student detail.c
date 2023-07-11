//program to read and display student details using structure
#include<stdio.h>
struct student
{
    char name[50];
    char roll[50];
    int marks[6];
    float avg;
};
int main()
{
    printf("Enter number of students: ");
    int n;
    scanf("%d",&n);
    struct student s[n];
    FILE *fp;
    /*fp=fopen("students.txt","w");
    for(int i=0;i<n;i++)
    {
        printf("Enter name of student %d: ",i+1);
        getchar();//to consume the newline character left by scanf
        fgets(s[i].name,50,stdin);
        printf("Enter roll number of student %d: ",i+1);
        scanf("%s",s[i].roll);
        printf("Enter marks of student %d: ",i+1);
        for(int j=0;j<6;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
        fprintf(fp,"%s %s ",s[i].name,s[i].roll);
        for(int j=0;j<6;j++)
        {
            fprintf(fp,"%d ",s[i].marks[j]);
        }
        fprintf(fp,"\n");
    }
    fclose(fp);*/
    int avg[n][6];
    fp=fopen("students.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            fscanf(fp,"%d ",&avg[i][j]);
        }
    }
    fclose(fp);
    float averages[6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<n;j++)
        {
            averages[i]+=avg[j][i];
        }
    }
    printf("Average marks of students in each subject:\n");
    for(int i=0;i<6;i++)
    {
        printf("Subject %d: %f\n",i+1,(float)averages[i]/n);
    }
}