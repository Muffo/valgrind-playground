#include <stdlib.h>
#include <unistd.h>


int main() {
    void *ptr = NULL;
    
    ptr = malloc(1);
    if (ptr == NULL)
        return 1;

    write(1, ptr, 1); 

    free(ptr);
    return 0;
}
