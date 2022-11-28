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

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int k;

    k = 0;
    i = ft_strlen(dest);
    while(src[k] && k < nb)
    {
        dest[i] = src[k];
        i++;
        k++;
    }
    dest[i] = '\0';
    return(dest);
}

int main()
{
    char d[] = "Bella";
    char s[] = "atmosfera";
    printf("%s", ft_strncat(d, s, 8));
}