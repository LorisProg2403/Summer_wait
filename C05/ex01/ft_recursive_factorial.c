
int ft_recursive_factorial(int n)
{
    if (n < 0)
        return (0);
    if (n == 0)
        return (1);
    else
        return (n * ft_recursive_factorial(n - 1));
}