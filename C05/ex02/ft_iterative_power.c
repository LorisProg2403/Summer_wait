
int ft_iterative_power(int nb, int power)
{
    int out;
    int x;

    out = 1;
    x = 0;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    while (x < power)
    {
        out *= nb;
        x++;
    }
    return (out);
}
