#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    /* If new_size == old_size do not do anything and return ptr */
    if (new_size == old_size)
        return ptr;

    /* If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size */
    if (ptr == NULL)
        return malloc(new_size);

    /* If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL */
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return NULL;
    }

    new_ptr = malloc(new_size);

    if (new_ptr)
    {
        /* The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes */
        memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
        free(ptr);
    }

    return new_ptr;
}
