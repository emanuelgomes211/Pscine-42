void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int aux;
    int end;

    i = 0;
    end = size - 1;
    while(i < (size / 2))
    {
        aux = tab[i];
        tab[i] = tab[end];
        tab[end] = aux;
        i++;
        end--;
    }
}
/*
#include <stdio.h>
int main()
{
    int tab[] = {5,9,8,1, 10, 20,30,40,59,11,24,2};
    int size = sizeof(tab) / 4;
    ft_rev_int_tab(tab, size);

    for(int i = 0; i < size; i++)
    {
        printf("%d\n", tab[i]);
    }
    return (0);
}
*/