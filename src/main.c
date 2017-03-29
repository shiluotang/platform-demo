#include "hello.h"

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#ifdef HAVE_CONFIG_H
#   include <config.h>

#   ifdef HAVE_STDBOOL_H
#      include <stdbool.h>
#   else
#      ifndef HAVE__BOOL
#          ifdef __cplusplus
               typedef bool _Bool;
#          else
#              define _Bool signed char
#          endif
#      endif
#      define bool _Bool
#      define false 0
#      define true 1
#      define __bool_true_false_are_defined 1
#   endif

#   ifdef TIME_WITH_SYS_TIME
#      include <sys/time.h>
#      include <time.h>
#   else
#      ifdef HAVE_SYS_TIME_H
#          include <sys/time.h>
#      else
#          include <time.h>
#      endif
#   endif

#   ifdef HAVE_UNISTD_H
#      include <unistd.h>
#   endif

#endif

int main(int argc, char* *argv) {
    time_t rawtime;
    struct tm *tt;
#ifdef ENABLE_NLS
    setlocale(LC_ALL, "");
    bindtextdomain(PACKAGE, LOCALEDIR);
    textdomain(PACKAGE);
#endif

    hello();

    printf(gettext("Never stop\n"));
#ifdef HAVE_USLEEP
    usleep(1 * 1000 * 1000);
#else
    printf(gettext("Warning `usleep' is not supported on this platform!\n"));
#endif
    time(&rawtime);
    tt = localtime(&rawtime);
    printf("%s", asctime(tt));
    return EXIT_SUCCESS;
}
