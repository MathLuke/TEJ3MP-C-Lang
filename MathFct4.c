/*
 * Luke Mathieu
 * Mr. Wong
 * Nov. 14, 2022
 * C Lang Exercise 4
 */

#include <stdio.h>
#include <math.h> // header files needed for Math functions
double num, num2; // global variable

// Function Title
void title()
{
    printf("\n%30sMore Math Functions\n","");
}

// function spacing – create a number of blank lines, and then a number of spaces based on calling arguments
void spacing(int numOfLines, int numOfSpaces)
{
    for (int x=0; x<numOfLines; x++)
        printf("\n");
    for (int x=0; x<numOfSpaces; x++)
        printf(" ");
}

// function intro
void intro()
{
    title();
}

// function userInput
void userInput()
{
    spacing(1, 0);
    printf("Enter a real number:");
    scanf("%lf", &num);
    getchar(); // to get rid of the Enter character
    printf("Enter an exponent of the real number:");
    scanf("%lf", &num2);
    getchar();
}

// function display
void display()
{
    double answer;
    spacing(3, 30);
    answer = pow(num, num2);

    printf("round(%g)  \t= %lf", num, round(num));
    spacing(1, 30);
    printf("sqrt(%g)   \t= %lf", num, sqrt(num));
    spacing(1, 30);
    printf("pow(%g, %g)\t= %lf", num, num2, answer);
    spacing(1, 30);
    printf("ceil(%g)   \t= %lf", num, ceil(num));
}

// main program
int main()
{
    intro();
    userInput();
    display();
    getchar();
    return 0;
}