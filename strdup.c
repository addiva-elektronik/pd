/*
 * This is free and unencumbered software released into the public domain.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *fs_strdup(const char *str)
{
    size_t len;
    char *ptr;

    if ((char *)str == NULL)
	    return NULL;

    len = strlen(str) + 1;
    ptr = malloc(len);
    if (!ptr)
	return NULL;

    return memcpy(ptr, str, len);
}

/**
 * Local Variables:
 *  indent-tabs-mode: nil
 *  c-file-style: "stroustrup"
 * End:
 */
