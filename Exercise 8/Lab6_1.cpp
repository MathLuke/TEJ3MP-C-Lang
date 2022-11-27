#include <stdio.h>
#include <string.h>
#include <cstdlib>

char str [] = "HELLO";

void display()
{
    system("cls"); //Wipe console to align more easily
    for (int i = 0; i < 12; i++) printf("\n"); //Center string vertically in console
    for(int i= 0 ; i < strlen(str); i++) {
        printf("%60s%c\n", "",str[i]);
    }
}

int main()
{
    display();
    getchar();
}