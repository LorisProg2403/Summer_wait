
int ft_iterative_factorial(int n)
{
    int fact;
    int x;

    fact = 1;
    x = 1;
    if (n < 0)
        return (0);
    if (n == 0)
        return (1);
    while (x <= n)
    {
        fact *= x;
        x++;
    }
    return (fact);
}
