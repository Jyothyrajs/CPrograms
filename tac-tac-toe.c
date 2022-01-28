


#include<stdio.h>

void displayBoard();
void play();
int verifySelection(int,int);
void checkForWin();

// Global variables
char board[9];
char cWhoWon = ' ';
int iCurrentPlayer = 0;
int iSquareNum = 0;

main()
{
    int x ;
    for(x= 0; x<9; x++)
    {
        board[x] = ' ';
    }
    displayBoard();  
    play();

}


void displayBoard()
{
    system("clear");
    printf("\n\t|\t|\n");
    printf("\n\t|\t|\n");
    printf("%c\t|%c\t|%c\n",board[0],board[1],board[2]);
    printf("--------|-------|--------\n");
    printf("\n\t|\t|\n");
    printf("%c\t|%c\t|%c\n",board[3],board[4],board[5]);
    printf("--------|-------|--------\n");
    printf("\n\t|\t|\n");
    printf("%c\t|%c\t|%c\n",board[6],board[7],board[8]);
    printf("--------|-------|--------\n");
    return;
}

void play()
{
    while(cWhoWon== ' ')
    {
        if(iCurrentPlayer==1 || iCurrentPlayer ==0)
        {
            printf("\n Player X\n");
            printf("Player X\n");
            printf("Enter an available square number(1-9): ");
            scanf("%d", &iSquareNum);
            if(verifySelection(iSquareNum,iCurrentPlayer) ==1)
            {
                iCurrentPlayer =2;
            }
            else
                iCurrentPlayer = 1;
        }
        else
        {
            printf( "\n Player 0\n");
            printf("Enter an available square number(1-9): ");
            scanf("%d", &iSquareNum);
            if(verifySelection(iSquareNum,iCurrentPlayer) ==1)
            {
                iCurrentPlayer =2;
            }
            else
                iCurrentPlayer = 1;


        }
        displayBoard();
       checkForWin();

    }
}


int verifySelection(int sqNum, int player)
{
    if(board[sqNum-1] == ' ' && (player==1 ||player ==0))
    {
        board[sqNum -1] = 'X';
        return 1;
    }
    else if(board[sqNum-1] == ' ' && (player==2))
    {
        board[sqNum -1] = '0';
        return 2;

    }

    return 0;
}

void checkForWin()
{
    if(board[0]=='X' && board[1]=='X' && board[2]=='X')
    {
         cWhoWon = 'X';
    }
    else   
    if(board[3]=='X' && board[4]=='X' && board[5]=='X')
    {
         cWhoWon = 'X';
    }
    else   
    if(board[6]=='X' && board[7]=='X' && board[8]=='X')
    {
         cWhoWon = 'X';
    }
    else   
    if(board[0]=='X' && board[4]=='X' && board[8]=='X')
    {
         cWhoWon = 'X';
    }
    else   
    if(board[2]=='X' && board[4]=='X' && board[6]=='X')
    {
         cWhoWon = 'X';
    }
    else   
    if(board[0]=='X' && board[1]=='X' && board[2]=='X')
    {
         cWhoWon = 'X';
    }
    if(board[0]=='0' && board[1]=='0' && board[2]=='0')
    {
         cWhoWon = '0';
    }
    else   
    if(board[3]=='0' && board[4]=='0' && board[5]=='0')
    {
         cWhoWon = '0';
    }
    else   
    if(board[6]=='0' && board[7]=='0' && board[8]=='0')
    {
         cWhoWon = '0';
    }
    else   
    if(board[0]=='0' && board[4]=='0' && board[8]=='0')
    {
         cWhoWon = '0';
    }
    else   
    if(board[2]=='0' && board[4]=='0' && board[6]=='0')
    {
         cWhoWon = '0';
    }
    else   
    if(board[0]=='0' && board[1]=='0' && board[2]=='0')
    {
         cWhoWon = '0';
    }

    if(cWhoWon == 'X')
    {
        printf("X wins !!\n");
        return;
    }
    else if(cWhoWon == '0')
    {
        printf("0 wins !!\n");
        return;
    }

}





