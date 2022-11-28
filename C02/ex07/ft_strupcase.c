#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
        write(1,&str[i], 1);
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char s[] = "La piccOla Fo3m7c8";
    printf("%s", ft_strupcase(s));    
}