#include <stdio.h>
#include <stdlib.h>

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