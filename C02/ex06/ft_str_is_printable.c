int ft_str_is_printable(char *str)
{
    int x;

    x = 0;
    while (str[x])
    {
        if (str[x] < 32 || str[x] == 127)
            return (0);
        x++;
    }
    return (1);
}