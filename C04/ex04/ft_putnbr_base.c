
#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

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
            if (base[i] == base[j])
                *error = 0;
        }
        if (base[i] == '-' || base[i] == '+' || base[i] == '%'
            || base[i] == '/' || base[i] == '*' || base[i] == '='
            || base[i] == ',' || base[i] == '.' || base[i] < 33
            || base[i] == 127)
            *error = 0;
        else
            i++;
    }
}

void    ft_putnbr_base(int nbr, char *base)
{
    int     lenbase;
    int     error;
    long    n;

    lenbase = 0;
    error = 1;
    ft_error(base, &error);
    n = nbr;
    if(error)
    {
        if (n < 0)
        {
            ft_putchar('-');
            n *= -1;
        }
        while (base[lenbase])
            lenbase++;
        if (n < lenbase)
            ft_putchar(base[n]);
        if (n >= lenbase)
        {
            ft_putnbr_base(n / lenbase, base);
            ft_putnbr_base(n % lenbase, base);
        }
    }
}
/*
int		main(void)
{
    ft_putnbr_base(-2147483648, "0123456789");
    write(1, "\n",1);
}*/
