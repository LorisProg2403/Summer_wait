#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int x;

    x = 0;
    while (s1[x] && s2[x] && s1[x] == s2[x])
        x++;
    return (s1[x] - s2[x]);
}

void    ft_putstr(char *s)
{
    int x;

    x = 0;
    while (s[x])
    {
        write (1, &s[x], 1);
        x++;
    }
    write (1, "\n", 1);
}

int main(int ac, char **av)
{
    int x;
    int size;

    size = ac;
    while (size > 1)
    {
        x = 1;
        while (x < size - 1)
        {
            if (ft_strcmp(av[x], av[x + 1]) > 0)
            {
                char *swap = av[x];
                av[x] = av[x + 1];
                av[x + 1] = swap;
            }
            x++;
        }
        size--;
    }
    x = 0;
    while (++x < ac)
        ft_putstr(av[x]);
}
