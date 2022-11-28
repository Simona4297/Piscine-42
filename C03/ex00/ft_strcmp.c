#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    unsigned int diff;

    i = 0;
    diff = 0;
    while( s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    diff = (s1[i] - s2[i]);
    return(diff);
}

int main()
{
    char s1[] = "daa";
    char s2[] = "bgb";
    printf("%d", ft_strcmp(s1, s2));
    return(0);
}