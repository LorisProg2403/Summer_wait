#include <stdlib.h>
int *ft_range(int min, int max)
{
    int *tab;
    int x;

    if(min >= max)
        return(0);
    tab = (int *)malloc(sizeof(int) * (max - min));
    if(!tab)
        return(0);
    x = 0;
    while(min < max)
    {
        tab[x] = min;
        x++;
        min++;
    }
    return (tab);
}
