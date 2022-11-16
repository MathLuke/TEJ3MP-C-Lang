/*
 * Luke Mathieu
 * Mr. Wong
 * November 15, 2022
 * C Lang Exercise 5
 */
#include <stdio.h>
#include <string.h>

char word[21];
int len;

void pauseProgram()
{
    printf("\nPress Enter key to continue...");
    getchar();
}

void intro()
{
    printf("See if you can understand strings!\n");
}

void userInput()
{
    printf("Type any word :");
    gets(word);
    if ((strlen(word) < 1 ) || (strlen(word) > 20)) {
        printf("\nInvalid input: Input must be between 1-20 characters");
        pauseProgram();
        userInput();
    }
}

void display()
{
    len = strlen(word);
    printf("length of the input is %d\n", len);

    if (len < 5) {
        printf("%s is less than 5 characters long", word);
    } else {
        if (len % 2 == 1) {
            printf("%s has an odd number of letters.\nThe middle letter is at position %d", word, (len/2) + 1);
        } else {
            printf("%s has an even number of letters.", word);
        }
    }
}

int main()
{
    intro();
    userInput();
    display();
    pauseProgram();
    return 0;
}