int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}
/*
#include <stdio.h>
int main()
{
    char str[] = "Hello World!";
    int resultado = ft_strlen(str);
    printf("%d", resultado);
    return (0);
}*/