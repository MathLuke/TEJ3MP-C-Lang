#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// Declaration Section
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
// Function Title
void title(char * programTitle)
{
    int len = strlen(programTitle);
    system("cls");
    printf("\n");
    for(int i=1;i< 40 - len/2; i++) printf("");
    printf("%s\n", programTitle);
}
// User Input
void userInput()
{
    title("Random Number");
    printf("\nEnter a number between 1 and 100: ");
    scanf("%d", &guess);
    getchar();
}
// Function displayRand
void displayRand()
{
/* The following 2 lines are needed for generating
different random numbers for each execution.
Simple "srand()" seed: just use "time()"
*/
    title("Random Number");
    if ( guess > num)
        printf("\nCome down!\n");
    else if (guess < num)
        printf("\nWay down there?\n");
    else
    printf("\nRight on!\n");
    pauseProgram();
}
// Main Program
int main()
{
    randNum();
    do
    {
        userInput();
        displayRand();
        numGuesses++;
        if (num == guess) // get out of the loop
        {
            break;
        }
        if ((guess > 100) || (guess < 1))
        {
            numGuesses--;
        }
    } while (numGuesses < 3); // this is an infinite loop, as 1 is considered true in C
    return 0;
}