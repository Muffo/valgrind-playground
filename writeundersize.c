#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 16

int main() {
    void *ptr = NULL;
    void *ptrLong = NULL;
    ptr = malloc(BUF_SIZE);
    ptrLong = malloc(BUF_SIZE+1);
    if ((ptr == NULL)||(ptrLong == NULL))
        return 1;
    //copying smaller data to bigger buffer (some part of memory will remain garbage)
    memcpy (ptrLong,ptr,BUF_SIZE+1);

    free (ptr);
    free (ptrLong);
    return 0;
    }

