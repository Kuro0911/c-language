/*

GAME TIME VROOOOOOO

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 11 + 1; //this will generate a random number between 1 and 10
    printf("the no. is %d\n" , number);
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

    return 0;
}