#include <stdio.h>
#include "foo.h"


int main(void) {
    printf("Running program...\n");
    baaz();

    int z = sum(5,5);
    printf("Result from static library 5 + 5 = %d\n",z);
    return 0;
}
