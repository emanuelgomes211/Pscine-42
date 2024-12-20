char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    if (str[0] >= 97 && str[0] <= 122)
    {
        str[0] -= 32;
    }

    i = 1;
    while (str[i])
    {
        if ((str[i - 1] < 97 || str[i - 1] > 122) &&
            (str[i - 1] < 65 || str[i - 1] > 90) &&
            (str[i - 1] < 48 || str[i - 1] > 57))
        {
            if(str[i] >= 97 && str[i] <= 122)
            {
                str[i] -= 32;
            }
        }
        else
            {
                if(str[i] >= 65 && str[i] <= 90)
                {
                    str[i] += 32;
                }
            }
        i++;
    }
    return (str);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
    return (0);
}
*/