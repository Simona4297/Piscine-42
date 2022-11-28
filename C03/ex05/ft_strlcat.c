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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    int k;

    k = 0;
    i = ft_strlen(dest);
    while(src[k] && k < (size - i - 1))
    {
        dest[i] = src[k];
        k++;
        i++;
    }
    dest[i] = '\0';
    return(i);   
}

int main()
{
    char d[] = "Sul bel";
    char s[] = "Danubio blu";
    printf("%d", ft_strlcat(d, s, 40));
}