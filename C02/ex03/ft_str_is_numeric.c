
int ft_str_is_numeric(char *str)
{
    int x;

    x = 0;
    while (str[x])
    {
        if (str[x] < '0' || str[x] > '9')
            return (0);
        x++;
    }
    return (1);
}
