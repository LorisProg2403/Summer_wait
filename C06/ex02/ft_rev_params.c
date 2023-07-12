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
    while (ac > 1)
    {
        ft_putstr(av[ac - 1]);
        write (1, "\n", 1);
        ac--;
    }
}
