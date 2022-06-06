
/*
GAME TIME VAIS
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int difficulty, number, guess, nguesses = 1;
    printf("********************PLEASE READ THIS***********************\n\n");
    printf("THIS IS A NUMBER GUESSING GAME MADE BY RAPTOR(DHANANJAI SHARMA)\n");
    printf("THE RULES ARE PRETTY SIMPLE\n");
    printf("THERE ARE THREE DIFFERNT LEVELS OF THE GAME \n");
    printf("1 THE RANDOM NUMBER SELECTED BY THE CODE IS JUST BETWEEN 1 AND 10\n");
    printf("2 THE RANDOM NUMBER SELECTED BY THE CODE IS JUST BETWEEN 1 AND 100 IT GETS WORSE TRUST ME\n\n");
    printf("**CAUTION** CHOOSE THIS ONLY IF YOU ARE TOTALY FREE)\n\n");
    printf("3 THE RANDOM NUMBER SELECTED BY THE CODE IS JUST BETWEEN 1 AND 1000\n\n");
    printf("SO LETS SEE HOW MANY ATTEMPTS DO YOU TAKE :)\n\n");
    printf("chose the difficulty from 1<2<3 :)\n ");    
    

    scanf("%d", &difficulty);

    switch (difficulty)
    {
    case 1:

        srand(time(0));
        number = rand() % 10 + 1; //this will generate a random number between 1 and 10
       // printf("the no. is %d\n" , number);
        do
        {
            printf("guess the number between 1 and 10 pls\n");
            scanf("%d", &guess);
            if (guess > number)
            {
                printf("lower number please vro\n");
            }
            else if (guess < number)
            {
                printf("higher number pls\n");
            }
            else
            {
                printf("you guessed in %d attempts you noob you lose XD\n", nguesses);
            }
            nguesses++;

        } while (guess != number);
        break;
    case 2:

        srand(time(0));
        number = rand() % 100 + 1; //this will generate a random number between 1 and 100
        //printf("the no. is %d\n" , number);
        do
        {
            printf("guess the number between 1 and 100 pls\n");
            scanf("%d", &guess);
            if (guess > number)
            {
                printf("lower number please vro\n");
            }
            else if (guess < number)
            {
                printf("higher number pls\n");
            }
            else
            {
                printf("you guessed in %d attempts you noob you lose XD\n", nguesses);
            }
            nguesses++;

        } while (guess != number);
        break;
    case 3:

        srand(time(0));
        number = rand() % 1000 + 1; //this will generate a random number between 1 and 1000
        //printf("the no. is %d\n" , number);
        do
        {
            printf("guess the number between 1 and 1000 pls BOHOT DIFFICULT \n");
            scanf("%d", &guess);
            if (guess > number)
            {
                printf("lower number please vro\n");
            }
            else if (guess < number)
            {
                printf("higher number pls\n");
            }
            else
            {
                printf("you guessed in %d attempts you noob you lose XD\n", nguesses);
            }
            nguesses++;

        } while (guess != number);
        break;

    default:
        printf("padhai likhai karo pehele yeh kya likh diye hoe\n");
    }

    return 0;
}