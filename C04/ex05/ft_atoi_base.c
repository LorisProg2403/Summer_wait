
void    ft_error(char *base, int *error)
{
    int i;
    int j;

    i = 0;
    if (!base[0] || !base[1])
        *error = 0;
    while (base[i] && *error)
    {
        j = i;
        while (base[j])
        {
            j++;
            if (base[j] && base[j] == base[i])
                *error = 0;
        }
        if (base[i] == '-' || base[i] == '+' || base[i] == '%'
            || base[i] == '/' || base[i] == '*' || base[i] == '='
            || base[i] == ',' || base[i] == '.' || base[i] < 33
            || base[i] == 127)
            *error = 0;
        i++;
    }
    *error = i;
}

int ft_is_neg(char *str, int *x)
{
    int isminus;

    isminus = 1;
    while(str[*x] == '+' || str[*x] == '-')
    {
        if (str[*x] == '-')
            isminus *= -1;
        *x += 1;
    }
    return (isminus);
}

int ft_atoi_base_tempo(char c, char *base)
{
    int x;

    x = 0;
    while (base[x])
    {
        if (c == base[x])
            return (x);
        x++;
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
    int x;
    int isminus;
    int to_int;
    int error_and_len;
    int tempo;

    x = 0;
    to_int = 0;
    error_and_len = 1;
    while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
        x++;
    ft_error(base, &error_and_len);
    if (!error_and_len)
        return (0);
    isminus = ft_is_neg(str, &x);
    tempo = ft_atoi_base_tempo(str[x], base);
    while (tempo != -1)
    {
        to_int = to_int * error_and_len + tempo;
        x++;
        tempo = ft_atoi_base_tempo(str[x], base);
    }
    return (to_int * isminus);
}


