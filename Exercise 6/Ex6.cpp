/*
 * Luke Mathieu
 * Mr. Wong
 * November 18, 2022
 * C Lang Exercise 6
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int num;
int guess;
int numGuesses;

void pauseProgram()
{
    printf("\nPress any key to continue...");
    getchar();
}

void randNum () {
    unsigned int iseed = (unsigned int)time(NULL);
    srand (iseed);
    num = rand() % 100; // generate a random no. from 0 to 99
    num = num + 1; // num is now a random no. from 1 to 100
}

void title(char * programTitle)
{
    int len = strlen(programTitle);
    system("cls");
    printf("\n");
    for(int i=1;i< 40 - len/2; i++) printf("");
    printf("%s\n", programTitle);
}

void userInput()
{
    title("Random Number");
    printf("\nEnter a number between 1 and 100: ");
    scanf("%d", &guess);
    getchar();
    if ((guess > 100) || (guess < 1))
    {
        printf("\nMake sure you enter a number from 1 to 100.\n");
        pauseProgram();
        userInput();
    }
}

void display () {
    if ( guess > num)
        printf("\nCome down!\n");
    else if (guess < num)
        printf("\nWay down there?\n");
    else
        printf("\nRight on!\n");
    pauseProgram();
}

void goodbye () {
    if (guess == num) {
        printf("\nGood Job! ");
    } else {
        printf("\nGood luck next time. ");
    }
    printf("Answer was %d.\nBy: Luke Mathieu\n", num);
}

int main()
{
    randNum();
    do
    {
        userInput();
        display();
        numGuesses++;
        if (num == guess)
        {
            break;
        }
    } while (numGuesses < 3);
    goodbye();
    return 0;
}