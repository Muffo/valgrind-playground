#include <stdlib.h>
#include <stdio.h>



int foo(int n) {
    /* Variable res is not initialized */
    int i, res;

    for (i=0; i < n; ++i)
        res++;

    return res;
}


int main() {
    /* Variable n is not initialized */
    int n, m;

    m = foo(n);
    printf("m = %d\n", m);

    return 0;
}
