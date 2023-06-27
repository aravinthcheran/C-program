#include<stdio.h>
#define MAX 100
struct item
{
    char name[50];
    int count;
    int cost;
};
int getitem(struct item *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of item %d: ",i+1);
        scanf("%s",(p+i)->name);
        printf("\nEnter the count of item %d: ",i+1);
        scanf("%d",&(p+i)->count);
        printf("\nEnter the cost of item %d: ",i+1);
        scanf("%d",&(p+i)->cost);
    }
}
int count(struct item *p,int n)
{
    int c;
    for(int i=0;i<n;i++)
    {
        c+=(p+i)->count;
    }
    printf("\nTotal number of items: %d",c);
    return 0;
}
int display(struct item *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nItem name: %s",(p+i)->name);
        printf("\nItem count: %d",(p+i)->count);
        printf("\nItem cost: %d",(p+i)->cost);
    }
}
int tcost(struct item e[],int n)
{
    int totalcost;
    for(int i=0;i<n;i++)
    {
        totalcost+=(e[i].cost)*(e[i].count);
    }
    printf("\nTotal cost of all items: %d",totalcost);
    return 0;
}
int find(struct item e[],int n)
{
    int i;
    printf("Enter the item number: ");
    scanf("%d",&i);
    printf("\nName: %s",e[i-1].name);
    printf("\nCount: %d",e[i-1].count);
    printf("\nCost: %d",e[i-1].cost);
    return 0;
}
char findstring(struct item *p,int n)
{
    char s[50];
    printf("Enter the item name: ");
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(strcmp(e[i].name,s)==0)
        {
            printf("\nItem found at position %d",i+1);
            break;
        }
        if(i==n-1)
        {
            printf("\nItem not found");
        }

    }
    return 0;
}
int compare(struct item e[],int n)
{
    int count;
    printf("Enter the comparator count: ");
    scanf("%d",&count);
    for(int i=0;i<n;i++)
    {
        if(e[i].count>count)
        {
            printf("\nItem name: %s",e[i].name);
            printf("\nItem count: %d",e[i].count);
            printf("\nItem cost: %d",e[i].cost);
        }
    }
}
int comparecost(struct item e[],int n)
{
    int cost;
    printf("Enter the comparator cost: ");
    scanf("%d",&cost);
    for(int i=0;i<n;i++)
    {
        if(e[i].cost>cost)
        {
            printf("\nItem name: %s",e[i].name);
            printf("\nItem count: %d",e[i].count);
            printf("\nItem cost: %d",e[i].cost);
        }
    } 
}
int main()
{
    struct item e[MAX];
    int n,t,s;
    printf("Enter the total number of items: ");
    scanf("%d",&n);
    getitem(e,n);
    /*for(int i=0;i<n;i++)
    {
        printf("Enter the name of item %d: ",i+1);
        scanf("%s",e[i].name);
        printf("Enter the count of item %d: ",i+1);
        scanf("%d",&e[i].count);
        printf("Enter the cost of item %d: ",i+1);
        scanf("%d",&e[i].cost);
        t+=e[i].count;
        s+=(e[i].cost)*(e[i].count);
    }*/
    int i;
    printf("Menu");
    printf("\n1. Display all items");
    printf("\n2. Display total number of items");
    printf("\n3. Display total cost of all items");
    printf("\n4.Print ith item");
    printf("\n5.enter the item to be searched:");
    printf("\n6.Display all items with count greater than comparator quantity:");
    printf("\n7.display all item with cost greater than comparator cost:");
    printf("\n8.exit");
    printf("\nEnter your choice: ");
    scanf("%d",&i);
    switch (i)
    {
        case 1:
        {
            display(e,n);
        }
        case 2:
        {
            count(e,n);
        }
        case 3:
        {
            tcost(e,n);       
        }
        case 4:
        {
            find(e,n);
        }
        case 5:
        {
            findstring(e,n);
        }
        case 6:
        {
            compare(e,n);
        }
        case 7:        
        {
            comparecost(e,n);
        }
        case 8:
        {
            exit(0);
        }
    }

}