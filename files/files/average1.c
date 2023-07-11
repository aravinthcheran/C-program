#include<stdio.h>
#include<math.h>
int main()
{
    FILE *fptr;
        fptr=fopen("num.txt","r");
            int n,i=0;
                float sum=0;
                    while (fscanf(fptr, "%d", &n)==1)
                        {
                                i++;
                                        sum+=n;
                                                printf("%d\n",n);
                                                    }
                                                        fclose(fptr);
                                                            printf("Average:%f",sum/i);
                                                            }