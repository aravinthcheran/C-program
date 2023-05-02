#include<stdio.h>
int main()
{
    printf("Welcome to the game of Rock, Paper and Scissor\n");
    printf("Enter 1 for Rock, 2 for Paper and 3 for Scissor\n");
    int player1,player2;
    printf("Player 1 turn: ");
    scanf("%d",&player1);
    printf("Player 2 turn: ");
    scanf("%d",&player2);
    if(player1==1 && player2==2)
    {
        printf("Player 2 wins\n");
    }
    else if(player1==1 && player2==3)
    {
        printf("Player 1 wins\n");
    }
    else if(player1==2 && player2==1)
    {
        printf("Player 1 wins\n");
    }
    else if(player1==2 && player2==3)
    {
        printf("Player 2 wins\n");
    }
    else if(player1==3 && player2==1)
    {
        printf("Player 2 wins\n");
    }
    else if(player1==3 && player2==2)
    {
        printf("Player 1 wins\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
    
}