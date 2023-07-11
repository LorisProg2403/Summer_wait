
int ft_sqrt(int n)
{
    int i;

    i = 0;
    if (n <= 0)
        return (0);
    //4630 is the biggest result we can have with int
    while (i * i < n && i <= 46340)
        i++;
    return ((i * i == n) ? i : 0);
}
