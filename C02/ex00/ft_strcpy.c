#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

int main()
{
    char s[] = "la luna nel pozzo";
    char d[] = "\0";
    printf("%s", ft_strcpy(d, s));
    return(0);
}