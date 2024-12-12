void    ft_swap(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
/*
#include <stdio.h>
int main()
{
    int a = 20;
    int b = 10;
    ft_swap(&a, &b);
    printf("%d\n%d\n", a, b);
    return (0);
}*/