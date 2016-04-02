#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 16

int main() {
    void *ptr = NULL;
    
    ptr = malloc(BUF_SIZE);
    if (ptr == NULL)
        return 1;

    /* Set memory outside the buffer */
    memset(ptr, 0, BUF_SIZE+1);
    free(ptr);

    return 0;
}
