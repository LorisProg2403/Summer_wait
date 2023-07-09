
int ft_strlen(char *s)
{
    int x;

    x = 0;
    while (s[x])
        x++;
    return (x);
}
