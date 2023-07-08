#include <unistd.h>

void    ft_putchar(char c, int n)
{
    int x;

    x = 0;
    while (x < n)
    {
        write(1, &c, 1);
        x++;
    }
}

void    ft_get_hex(unsigned long long n, int prev)
{
    char    *base;

    base = "0123456789abcdef";
    if (n < 16 && prev == 1)
        ft_putchar('0',1);
    if (n >= 16)
    {
        ft_get_hex(n / 16, 0);
        ft_get_hex(n % 16, 0);
    }
    else
        ft_putchar(base[n],1);
}

void    ft_print_addr(unsigned long long addr)
{
    unsigned long long  l;
    int                 x;

    l = addr;
    x = 2;
    while (x < 15)
    {
        if (l < 16)
            ft_putchar('0',1);
        l /= 16;
        x++;
    }
    ft_get_hex(addr,0);
}

void    ft_print_data(unsigned char *c, int len)
{
    int x;

    x = -1;
    while (x++ < 16)
    {
        if (x % 2 == 0)
            ft_putchar(' ',1);
        if (x < len)
            ft_get_hex((unsigned long long)c[x],1);
        else if (x != 16)
            ft_putchar(' ',2);
    }
    x = -1;
    while (x++ < len - 1)
    {
        if (c[x] < 32 || c[x] == 127)
            ft_putchar('.',1);
        else
            ft_putchar(c[x],1);
    }

}

void    *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int    x;
    unsigned char   *s;
    unsigned int    actulen;

    x = 0;
    s = addr;
    while (x * 16 < size)
    {
        if (x < size / 16)
            actulen = 16;
        else
            actulen = size % 16;
        ft_print_addr((unsigned long long)s + (x * 16));
        ft_putchar(':',1);
        ft_print_data(s + (x * 16), actulen);
        ft_putchar('\n',1);
        x++;
    }
    return (addr);
}
