#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_test(int table[10], int x, int y)
{
    int i;

    i = -1;
    while (++i < x)
        if (y == table[i] || i + table[i] == x + y || i - table[i] == x - y)
            return (0);
    return (1);
}

void ft_ten_queens(int table [10], int *out, int pos)
{
    int x;
    int y;

    if (pos == 10)
    {
        *out += 1;
        y = -1;
        while (++y < 10)
            ft_putchar(table[y] + '0');
        ft_putchar('\n');
    }
    else
    {
        x = -1;
        while (++x < 10)
        {
            if(ft_test(table, pos, x))
            {
                table[pos] = x;
                ft_ten_queens(table, out,pos + 1);
            }
        }
    }
}

int ft_ten_queens_puzzle(void)
{
    int table[10];
    int x;
    int output;

    x = -1;
    while(++x < 10)
        table[x] = -1;
    output = 0;
    ft_ten_queens(table, &output, 0);
    return (output);
}

