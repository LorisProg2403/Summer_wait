#include <unistd.h>

void    ft_putstr(char *s)
{
    int x;

    x = 0;
    while (s[x])
    {
        write (1, &s[x], 1);
        x++;
    }
}

int main(int ac, char **av)
{
    ft_putstr(av[ac - ac]);
    write (1, "\n", 1);
}
