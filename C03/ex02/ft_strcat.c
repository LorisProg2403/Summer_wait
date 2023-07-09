
char    *ft_strcat(char *dest, char *src)
{
    int x;
    int i;

    x = 0;
    while (dest[x])
        x++;
    i = 0;
    while (src[i])
    {
        dest[x] = src[i];
        x++;
        i++;
    }
    dest[x] = '\0';
    return (dest);
}
