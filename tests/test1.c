#include "../src/hello.h"

#ifdef HAVE_CONFIG_H
#   include <config.h>
#endif

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    hello();
    return EXIT_SUCCESS;
}
