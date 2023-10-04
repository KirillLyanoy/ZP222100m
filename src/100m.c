#include "mathfunctions.h"
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

int move(int MUTCHES_LEFT, int PLAYER_NUMBER)
{
    int MUTCHES_TAKEN;
    do {
        printf(" %d matches left.\n\n", MUTCHES_LEFT);
        printf(" Player #%d, take from 1 to 10 matches. \n",
               addition(PLAYER_NUMBER, 1));
        scanf("%d", &MUTCHES_TAKEN);
        fflush(stdin);
        if (MUTCHES_TAKEN > 0 & MUTCHES_TAKEN < 11) {
            if (MUTCHES_TAKEN > MUTCHES_LEFT) {
                system("CLS");
                printf(" The number of matches taken cannot be greater than "
                       "the number of matches remaining on the table.\n\n");
                MUTCHES_TAKEN = 11;
            } else
                MUTCHES_LEFT = subtraction(MUTCHES_LEFT, MUTCHES_TAKEN);
        } else

        {
            system("CLS");
            printf(" Wrong number of matches.\n\n");
        }
    } while ((MUTCHES_TAKEN < 1) || (MUTCHES_TAKEN > 10));
    return (MUTCHES_LEFT);
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
        c = getchar();
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
