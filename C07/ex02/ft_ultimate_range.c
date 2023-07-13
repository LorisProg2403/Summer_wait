#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int x;
    int *dest;

    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    dest = (int *)malloc(sizeof(int) * (max - min));
    if (!dest)
    {
        *range = 0;
        return (-1);
    }
    x = 0;
    while (x < max - min)
    {
        dest[x] = min + x;
        x++;
    }
    *range = dest;
    return (max - min);
}
