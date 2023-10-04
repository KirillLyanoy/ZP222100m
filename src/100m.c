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