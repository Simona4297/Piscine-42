#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        write(1,&str[i], 1);
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char s[] = "LA LepRE E0 7A TARtaruga";
    printf("%s", ft_strlowcase(s));    
}