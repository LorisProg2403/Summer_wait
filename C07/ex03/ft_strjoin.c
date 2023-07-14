#include <stdlib.h>

int ft_strlen(char *s)
{
    int x;

    x = 0;
    while (s[x])
        x++;
    return (x);
}

int ft_ultimate_len(char **strs, char *sep, int size)
{
    int ult_len;
    int x;

    ult_len = ft_strlen(sep) * (size - 1);
    x = 0;
    while (x < size)
    {
        ult_len += ft_strlen(strs[x]);
        x++;
    }
    return (ult_len);
}


char    *add_strs(char *dest, char *src)
{
    int x;

    x = 0;
    while (src[x])
    {
        *dest = src[x];
        x++;
        dest++;
    }
    return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *output;
    int     len;
    int     x;

    if (size <= 0)
        return ((char *)malloc(sizeof(char)));
    len = ft_ultimate_len(strs, sep, size);
    output = (char *)malloc(sizeof(char) * (len + 2));
    if (!output)
        return (0);
    x = -1;
    while (++x < size)
    {
        output = add_strs(output, strs[x]);
        if (x < size - 1)
            output = add_strs(output, sep);
    }
    *output = '\0';
    return (output - len);
}


