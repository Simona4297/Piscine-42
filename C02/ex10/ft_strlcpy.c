#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)

{
    int x;

    x = 0;
    while(str[x])
    {
        x++;
    }
    return(x);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    i = 0;
    while(src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(i);
}

int main()
{
    char s[] = "Dammi una";
    char d[] = "lama";
    printf("%d\n", ft_strlcpy(d, s, 4));
    printf("%s", d);
}