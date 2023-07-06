#include <unistd.h>

void    ft_print_numbers(void)
{
    int x;

    x = 0;
    while (x <= 9)
    {
        char c = x + '0';
        write (1, &c, 1);
        x++;
    }
}
