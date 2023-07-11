
int ft_is_prime(int n)
{
    int x;

    if (n < 3 || !(n % 2))
        return (n == 2);
    x = 3;
    while (x * x <= n)
    {
        if (!(n % x))
            return (0);
        x += 2;
    }
    return (1);
}

int ft_find_next_prime(int n)
{
    if (ft_is_prime(n))
        return (n);
    while (!ft_is_prime(n))
        n++;
    return (n);
}
