#include<stdio.h>
struct book
{
    char name[50];
    int copies;
    long int number;
    float price;
}b[3]={{"The Alchemist",100,1234567890,250.00},{"The Monk who sold his Ferrari",200,1234567891,350.00},{"The Power of Subconscious Mind",300,1234567892,450.00}};
int main()
{   char str1[]="THE HOOLINGER";
    strcpy(b[0].name,str1);
    for(int i=0;i<3;i++)
    {
        printf("The name of the book is: %s\n",b[i].name);
        printf("The number of copies of the book is: %d\n",b[i].copies);
        printf("The number of the book is: %ld\n",b[i].number);
        printf("The price of the book is: %f\n",b[i].price);
    }
    
}