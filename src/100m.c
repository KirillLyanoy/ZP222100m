#include "mathfunctions.h"
#include "mutches_check.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void rules()
{
    system("CLS");
    printf("There are 100 matches on the table. \nPlayer #1 and player #2 take "
           "turns taking from 1 to 10 matches. \nThe one who takes the last "
           "match wins.\n");
    getch();
}

int move(int MUTCHES_LEFT, int PLAYER_NUMBER)
{
    int MUTCHES_TAKEN;
    int CHECK_INDEX;
    printf(" %d matches left.\n\n", MUTCHES_LEFT);

    do {
        printf(" Player #%d, take from 1 to 10 matches. \n",
               addition(PLAYER_NUMBER, 1));

        CHECK_INDEX = scanf("%d", &MUTCHES_TAKEN);
        rewind(stdin);

        system("CLS");
        CHECK_INDEX = mutches_check(MUTCHES_TAKEN, CHECK_INDEX);

    } while ((CHECK_INDEX == 1) || (CHECK_INDEX == 2));
    if (MUTCHES_TAKEN > MUTCHES_LEFT) {
        system("CLS");
        printf(" The number of matches taken cannot be greater than "
               "the number of matches remaining on the table.\n\n");
        MUTCHES_TAKEN = 11;
    } else
        MUTCHES_LEFT = subtraction(MUTCHES_LEFT, MUTCHES_TAKEN);

    return (MUTCHES_LEFT);
}

void newgame()
{
    int MUTCHES_LEFT = 100, PLAYER_NUMBER = 0;

    while (MUTCHES_LEFT > 0) {
        system("CLS");
        MUTCHES_LEFT = move(MUTCHES_LEFT, PLAYER_NUMBER);
        if (MUTCHES_LEFT != 0)
            PLAYER_NUMBER = subtraction(1, PLAYER_NUMBER);
    }
    system("CLS");
    printf(" There are no matches left on the table.\n\n");
    printf(" Congratulations! Player #%d wins.", addition(PLAYER_NUMBER, 1));
    getch();
}

void authors()
{
    system("CLS");
    printf(" Students of SibSUTIS, ZP-222 group:\n\n");
    printf("1. Lyanoy Kirill.\n");
    printf("2. Spirina Olga.\n");
    getch();
}

int main()
{
    char c;
    while (1) {
        system("CLS");
        puts("     100 matches\n");
        puts(" 1 - Rules.");
        puts(" 2 - New game.");
        puts(" 3 - Authors.");
        puts(" 4 - Exit.");
        c = getch();
        switch (c) {
        case '1':
            rules();
            break;
        case '2':
            newgame();
            break;
        case '3':
            authors();
            break;
        case '4':
            return 0;
        }
    }
}
