#include "mutches_check.h"
#include <stdio.h>

int mutches_check()
{
    if ((MUTCHES_TAKEN < 1) || (MUTCHES_TAKEN > 10)) {
        printf(" Wrong number of matches.\n\n");
        return (2);
    } else
        return (1);
}



