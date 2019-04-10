#include <stdlib.h>
#include <stdio.h>

#ifdef HAVE_CONFIG_H
#   include <config.h>
#endif

#include "../src/hello.h"

int main(int argc, char* argv[]) {
    hello();
    return EXIT_SUCCESS;
}
