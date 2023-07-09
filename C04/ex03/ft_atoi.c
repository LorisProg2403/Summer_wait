
int ft_atoi(char *str)
{
    int x;
    int is_minus;
    int to_int;

    x = 0;
    is_minus = 1;
    to_int = 0;
    while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
        x++;
    while (str[x] == '+' || str[x] == '-')
    {
        if (str[x] == '-')
            is_minus *= -1;
        x++;
    }
    while (str[x] >= '0' && str[x] <= '9')
    {
        to_int = to_int * 10 + str[x] - '0';
        x++;
    }
    return (to_int * is_minus);
}
