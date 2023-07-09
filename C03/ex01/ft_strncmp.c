int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int x;

    x = 0;
    if (n == 0)
        return (0);
    while (s1[x] && s2[x] && x < n - 1)
    {
        if (s1[x] != s2[x])
            return (s1[x] - s2[x]);
        x++;
    }
    return (s1[x] - s2[x]);
}