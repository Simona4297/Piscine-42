#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *dest)
{
    int i;
    i = 0;

    while(dest[i])
    {
        i++;
    }
    return(i);
}

char *ft_strcat(char *dest, char *src)
{
    int i;
    int k;
    i = ft_strlen(dest);
    k = 0;
    while(src[k])
    {
        dest[i] = src[k];
        k++;
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

int main()
{
    char d[] = "Bella";
    char s[] = "atmosfera";
    printf("%s", ft_strcat(d, s));
}