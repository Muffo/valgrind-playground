#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 16

int main() {
    void *ptr = NULL;
    
    ptr = malloc(BUF_SIZE);
    if (ptr == NULL)
        return 1;

    memset(ptr, 0, BUF_SIZE);


    return 0;

}
