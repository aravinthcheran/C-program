#include<stdio.h>
enum switch_state {
    on=5,
    off
};

int main() {
    enum switch_state i;
    printf("Enter the state of switch: ");
    scanf("%d",(int*)&i);

    switch(i) 
    {
        case on:
            printf("ON:%d\n",i);
            break;
        case off:
            printf("The switch is off\n");
            break;
    }

    return 0;
}
