
int is_alpha(char c)
{
    if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
        return (0);
    return (1);
}

int is_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

char    *ft_strcapitalize(char *str)
{
    int x;

    x = 0;
    while (str[x])
    {
        if (x == 0 && is_alpha(str[x]))
        {
            if (str[x] >= 'a' && str[x] <= 'z')
                str[x] -= 32;
        }
        else if (is_alpha(str[x]))
        {
            if (str[x] >= 'A' && str[x] <= 'Z')
                str[x] += 32;
            if (!is_alpha(str[x - 1]) && !is_num(str[x - 1]))
                str[x] -= 32;
        }
        x++;
    }
    return (str);
}
