#include <string.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int x;
    unsigned int output;

    x = 0;
    output = 0;
    while (src[output])
        output++;
    if (size <= 0)
        return (output);
    while (src[x] && x < size - 1)
    {
        dest[x] = src[x];
        x++;
    }
    dest[x] = '\0';
    return (x);
}
