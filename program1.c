#include<stdio.h>
int main()
{
	char c[1];
	int x,y,z;
	printf("1-add\n2-subtract\n3-multiply\n4-divide\n5-end\n");
	scanf("%d",&z);
	printf("Enter the 2 numbers:\n");
	scanf("%d\n%d",&x,&y);
	switch(z)
	{
		case 1:
			printf("%d",x+y);
			break;
		case 2:
			printf("%d",x-y);
			break;
		case 3:
			printf("%d",x*y);
			break;
		case 4:
			printf("%d",x/y);
			break;
		case 5:
			printf("process terminated!!");
			break;
	}
}

