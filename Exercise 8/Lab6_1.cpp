#include <stdio.h>
#include <string.h>
#include <cstdlib>

char defaultStr [] = "HELLO";

void display(char str [])
{
    system("cls"); //Wipe console to guarantee output is aligned
    for (int i = ((30 - strlen(str)) / 2) - 1; i > 0; i--) printf("\n"); //Center string vertically in console
    for(int i= 0 ; i < strlen(str); i++) {
        printf("\n%60s%c", "",str[i]);
    }
}

int main(int argc, char *argv[])
{
    display(argc > 1 ? argv[1] : defaultStr);
    getchar();
    return 0;
}