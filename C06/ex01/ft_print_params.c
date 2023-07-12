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
    int x;

    x = 1;
    while (x < ac)
    {
        ft_putstr(av[x]);
        write(1, "\n", 1);
        x++;
    }
}