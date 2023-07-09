char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int             x;
    unsigned int    i;

    x = 0;
    while (dest[x])
        x++;
    i = 0;
    while (src[i] && i < nb)
    {
        dest[x] = src[i];
        x++;
        i++;
    }
    dest[x] = '\0';
    return (dest);
}
