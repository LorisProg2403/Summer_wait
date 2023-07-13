#include <stdlib.h>
char    *ft_strdup(char *src)
{
    char    *out;
    char    *buff;
    int     x;

    x = 0;
    while (src[x])
        x++;
    out = (char *)malloc(sizeof(char) * (x + 1));
    buff = out;
    if (!buff)
        return (0);
    x = 0;
    while (src[x])
    {
        buff[x] = src[x];
        x++;
    }
    buff[x] = '\0';
    return (out);
}
