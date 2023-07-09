
int ft_strlen(char *s)
{
    int x;

    x = 0;
    while (s[x])
        x++;
    return (x);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    len_d;
    unsigned int    len_s;

    i = ft_strlen(dest);
    j = 0;
    len_d = ft_strlen(dest);
    len_s = ft_strlen(src);
    if (size <= 0)
        return (len_s + size);
    while (src[j] && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    if (size < len_d)
        return (len_s + size);
    else
        return (len_s + len_d);
}