unsigned    int ft_strlen(char *src)
{
    unsigned int i;

    i = 0;
    while (src[i])
    {
        i++;
    }

    return i;
}

unsigned   int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }

    if (size > 0)
        dest[i] = '\0';

    return ft_strlen(src);
}
/*
#include <stdio.h>
int main()
{
    char src[] = "Hello";
    char dest[10];
    ft_strlcpy(dest, src, 0);
    printf("%s", dest);
    return (0);
}
*/