#include <unistd.h>

void	ft_putchar2(char a, char b)
{
    write(1, &a, 1);
    write(1, &b, 1);
}

void	ft_putnbr(int num)
{
    char unit;
    char ten;

    if (num > 9)
    {
        unit = (num % 10) + '0';
        ten = (num / 10) + '0';
        ft_putchar2(ten, unit);
    }
    else if (num <= 9)
    {
        unit = num + '0';
        ft_putchar2('0', unit);
    }
}

void	ft_print_comb2(void)
{
    int x1;
    int x2;

    x1 = 0;
    while (x1 <= 98)
    {
        x2 = x1 + 1;
        while (x2 <= 99)
        {
            ft_putnbr(x1);
            write(1, " ", 1);
            ft_putnbr(x2);
            if (x1 != 98 || x2 != 99)
                ft_putchar2(',', ' ');
            x2++;
        }
        x1++;
    }
}

//int main(void)
//{ft_print_comb2();}
