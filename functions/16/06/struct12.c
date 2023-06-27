#include<stdio.h>
#define MAX 100
struct item
{
    char name[50];
    int count;
    int cost;
};
int main()
{
    struct item e[MAX];
    int n,t;
    printf("Enter the total number of items: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of item %d: ",i+1);
        scanf("%s",e[i].name);
        printf("Enter the count of item %d: ",i+1);
        scanf("%d",&e[i].count);
        printf("Enter the cost of item %d: ",i+1);
        scanf("%d",&e[i].cost);
        t+=e[i].count;
    }
    printf("Total number of items: %d\n",t);
}