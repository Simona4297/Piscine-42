#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        if(str[i] >= 32 && str[i] <= 126)
        i++;
        else
        return(0);
    }
    return(1);
}

int main()
{
    char s[] = "CHIa";
    printf("%d", ft_str_is_printable(s));
}