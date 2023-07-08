#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int is_unprintable(char c)
{
    if (c < 32 || c == 127)
        return (1);
    return (0);
}

void    char_to_hex(char c, char *hex)
{
    int num;

    num = (int)c;
    hex[0] = 92;
    hex[1] = (num >> 4) < 10 ? (num >> 4) + '0' : (num >> 4) - 10 + 'a';
    hex[2] = (num & 0x0F) < 10 ? (num & 0x0F) + '0' : (num & 0x0F) - 10 + 'a';
}
void    ft_putstr_non_printable(char *str)
{
    int     x;
    char    hex[3];

    x = 0;
    while (str[x])
    {
        if (is_unprintable(str[x]))
        {
            char_to_hex(str[x],hex);
            ft_putchar(hex[0]);
            ft_putchar(hex[1]);
            ft_putchar(hex[2]);
        }
        else
            ft_putchar(str[x]);
        x++;
    }
}
