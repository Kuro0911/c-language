#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rockpaperscissors(char you, char comp)
{
    //FOR DRAW
    if (you == comp)
    {
        return 0;
    }
    //RS
    if (you == 'R' && comp == 'S')
    {
        return 1;
    }
    else if (you == 'S' && comp == 'R')
    {
        return -1;
    }
    //SP
    if (you == 'S' && comp == 'P')
    {
        return 1;
    }
    else if (you == 'P' && comp == 'S')
    {
        return -1;
    }
    //PR
    if (you == 'P' && comp == 'R')
    {
        return 1;
    }
    else if (you == 'R' && comp == 'P')
    {
        return -1;
    }
};
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 10 + 1;
    if (number< 3)
    {
        comp = 'S';
    }
    else if (number>3 && number<8)
    {
        comp = 'P';
    }
    else
    {
        comp = "R";
    }
    
    
    printf("enter [R] for rock , [P] for paper and [S] for scissors\n\n");
    scanf("%c", &you);
    int result = rockpaperscissors(you, comp);
    printf("YOU CHOSE %c AND COMPUTER CHOSE %c\n\n", you, comp);
    if (result == 0){
        printf("******************||G A M E || D R A W||*******************\n\n");
    }

    else if (result == 1){
        printf("******************||Y O U || W I N||*******************\n\n");
    }
    
    else{
        printf("******************||Y O U || L O S E||*******************\n\n");
    }

    return 0;
}