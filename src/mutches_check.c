#include "mutches_check.h"
#include <ctype.h>
#include <stdio.h>

int mutches_check(int MUTCHES_TAKEN, int CHECK_INDEX)
{
    if (CHECK_INDEX == 0) {
        printf(" Only numbers can be entered.\n\n");
        return (1);
    }
    if ((MUTCHES_TAKEN < 1) || (MUTCHES_TAKEN > 10)) {
        printf(" Wrong number of matches.\n\n");
        return (2);
    } else {
        printf("%d mutches taken.\n\n", MUTCHES_TAKEN);
        return (3);
    }
}
