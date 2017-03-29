#include "../hello.h"

#ifdef HAVE_CONFIG_H
#   include <config.h>
#endif

#include <stdlib.h>
#include <stdio.h>

void hello() {
    int *p = NULL;
    p = (int*) malloc(sizeof(*p));
    free(p);
    printf(gettext("hello from win32\n"));
}
