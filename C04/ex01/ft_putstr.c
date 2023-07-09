#include <unistd.h>

void    ft_putstr(char *s)
{
    int x;

    x = 0;
    while (s[x])
    {
        write (1, &s[x],1);
        x++;
    }
}
