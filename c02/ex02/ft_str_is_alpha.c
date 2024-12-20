int    ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if((str[i] < 65 || str[i] > 90) 
        && (str[i] < 97 || str[i] > 122))
        {
            return (0);
        }
        i++;
    }
    return (1);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "Hello";
    int result = ft_str_is_alpha(str);
    printf("%d", result);
    return (0);
}*/