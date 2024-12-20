char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "HELLO WORLD!";
    printf("%s", ft_strlowcase(str));
    return (0);
}
*/