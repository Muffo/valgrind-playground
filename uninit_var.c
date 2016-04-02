#include <stdlib.h>
#include <stdio.h>



int foo(int n) {
    int i, res;

    for (i=0; i < n; ++i)
        res++;

    return res;
}


int main() {
    int n, m;

    m = foo(n);
    printf("m = %d\n", m);

    return 0;
}
