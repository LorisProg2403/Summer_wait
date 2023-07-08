int ft_str_is_alpha_lower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

char    *ft_strupcase(char *str)
{
    int x;

    x = 0;
    while (str[x])
    {
        if (ft_str_is_alpha_lower(str[x]))
            str[x] -= 32;
        x++;
    }
    return (str);
}
