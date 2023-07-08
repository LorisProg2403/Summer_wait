int ft_str_is_alpha_upper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

char    *ft_strlowcase(char *str)
{
    int x;

    x = 0;
    while (str[x])
    {
        if (ft_str_is_alpha_upper(str[x]))
            str[x] += 32;
        x++;
    }
    return (str);
}