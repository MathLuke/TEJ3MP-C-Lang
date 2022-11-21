/*
 * Luke Mathieu
 * Mr. Wong
 * November 21, 2022
 * C Lang Exercise 7
 */

#include <stdio.h>
#include <stdlib.h>

int choice, num1, num2, answer;

void title() {
    system("cls");
    printf("%30sCalculation Game\n\n", "");
}

void introduction () {
    title();
    printf("This program will test your math abilities\n\n");
    printf("Press any key to continue:");
    getchar();
}

void mainMenu() {
    title();
    printf("\t1.\tPlay Game\n\t2.\tExit\n\n");
    printf("Enter 1 or 2:");
    scanf("%d", &choice);
    getchar();
    if (choice != 1 && choice != 2) {
        printf("\nSorry, you must enter either 1 or 2! Please try again\n");
        getchar();
        mainMenu();
    }
}

void userInput() {
    title();
    printf("Please enter positive numbers only!\n\n");
    do {
        printf("Enter a number:");
        scanf("%d", &num1);
        getchar();
        if (num1 > 0){
            break;
        } else {
            printf("Sorry, you must enter a positive value! Please try again.\n");
        }
    } while (1);

    do {
        printf("Enter another number:");
        scanf("%d", &num2);
        getchar();
        if (num2 > 0){
            break;
        } else {
            printf("Sorry, you must enter a positive value! Please try again.\n");
        }
    } while (1);

    do {
        printf("What is %d + %d?:", num1, num2);
        scanf("%d", &answer);
        getchar();
        if (answer > 0){
            break;
        } else {
            printf("Sorry, you must enter a positive value! Please try again.\n");
        }
    } while (1);
}

void display() {
    title();
    if (num1 + num2 == answer) {
        printf("Wow! You got the right answer!\n\n");
    } else {
        printf("Hmmm...Maybe we should review this math concept again!\n\n");
    }

    printf("Press any key to continue");
    getchar();
}

void goodbye() {
    title();
    printf("This program is written by:\nLuke Mathieu\n");
}

int main() {
    introduction();
    do {
        mainMenu();
        if (choice == 1) {
            userInput();
            display();
        }
    } while (choice != 2);
    goodbye();
    return 0;
}