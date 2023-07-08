
void    ft_sort_int_tab(int *tab, int size)
{
    int x;

    while (size > 0)
    {
        x = 0;
        while (x < size - 1)
        {
            if (tab[x] > tab[x + 1])
            {
                int swap = tab[x];
                tab[x] = tab[x + 1];
                tab[x + 1] = swap;
            }
            x++;
        }
        size--;
    }
}
