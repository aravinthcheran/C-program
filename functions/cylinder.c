#include<stdio.h>
//Defining a structure for cylinder
struct cylinder
{
    float height,radius;
    float volume;
    float tsa;
    float csa;
};
//Function to calculate volume of cylinder
float calculation(struct cylinder *c)
{
    c->volume=3.14*c->radius*c->radius*c->height;
    c->tsa=2*3.14*c->radius*(c->radius+c->height);
    c->csa=2*3.14*c->radius*c->height;
}

//Main function
int main()
{
    struct cylinder c;
    printf("Enter the height of cylinder: ");
    scanf("%f",&c.height);
    printf("Enter the radius of cylinder: ");
    scanf("%f",&c.radius);
    calculation(&c);
    printf("Volume of cylinder: %f\n",c.volume);
    printf("Total surface area of cylinder: %f\n",c.tsa);
    printf("Curved surface area of cylinder: %f\n",c.csa);
}