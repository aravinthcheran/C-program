#include<stdio.h>
struct book
{
    char name[50];
    int copies;
    long int number;
    float price;
};
int main()
{
    struct book b;
    int n;
    printf("Enter the total number of books: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the book: ");
        scanf("%s",b.name);
        printf("Enter the number of copies: ");
        scanf("%d",&b.copies);
        printf("Enter the price of the book: ");
        scanf("%f",&b.price);
        printf("Enter the book ID: ");
        scanf("%lu",&b.number);
        printf("\n");
        printf("The name of the book is %s\n",b.name);
        printf("The number of copies is %d\n",b.copies);
        printf("The price of the book is %f\n",b.price);
        printf("The book ID is %lu\n",b.number);
        printf("\n");
    }
}