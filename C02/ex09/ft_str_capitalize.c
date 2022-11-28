#include <unistd.h>
#include <stdio.h>

char    *ft_str_capitalize(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        else if(!(str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
        {
            if(str[i + 1] >= 97 && str[i + 1] <= 122)
            {
                write(1, &str[i], 1);
                i++;
                str[i] -= 32;
            }
        }
        if(str[0] >= 97 && str[0] <= 122)
        {
            str[0] -= 32;
        }
        write(1, &str[i], 1);
        i++;
    }
    str[i] = '\0';
}

int main()
    
{
    char s[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+un+et &ret?we)un";
    printf("%s", ft_str_capitalize(s));
}