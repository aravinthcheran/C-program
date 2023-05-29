#include<stdio.h>
struct bio
{
    char name[50];
    int age;
    float height;
    float marks[6]; // marks in percentage
    float avg;
}d[3];
void calculate_avg(struct bio d[],int i);
void sort(struct bio d[]);
int main()
{
    /*for(int i=0;i<3;i+=1)
    {
        printf("Enter the name of the person:");
        scanf("%s",d[i].name);
        printf("Enter the age of the person:");
        scanf("%d",&d[i].age);
        printf("Enter the height of the person:");
        scanf("%f",&d[i].height);
        for(int j=0;j<6;j++)
        {
            printf("Enter the marks of the person in subject %d:",j+1);
            scanf("%f",&d[i].marks[j]);
        }
        fflush(stdin);
    }*/
    struct bio d[3]={{"Rahul",20,5.6,{90,80,70,60,10,40},0.0},{"Rohit",21,5.7,{90,80,70,60,90,40},0.0},{"Raj",22,5.8,{90,80,70,60,50,40},0.0}};
    sort(d);
}
void calculate_avg(struct bio d[],int i)
{
    int sum=0;
    for(int j=0;j<6;j++)
    {
        sum+=d[i].marks[j];
    }
    d[i].avg=sum/6;
}
void sort(struct bio d[])
{
    for(int i=0;i<3;i++)
    {
        calculate_avg(d,i);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(d[i].avg<d[j].avg)
            {
                struct bio temp=d[i];
                d[i]=d[j];
                d[j]=temp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("The name of the person is: %s\n",d[i].name);
        printf("The age of the person is: %d\n",d[i].age);
        printf("The height of the person is: %f\n",d[i].height);
        printf("Average marks:%f\n",d[i].avg);
    }
}

