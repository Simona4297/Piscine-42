#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(src[i] && (i < n))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

int main()
{
    char s[] = "Volevo un gatto nero";
    char d[5];
    unsigned int n = 3;
    int i;
    printf("%s\n", ft_strncpy(d, s, n));
    return(0);
}