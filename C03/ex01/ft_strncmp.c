#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    unsigned int diff;

    i = 0;
    diff = 0;
    while((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < n)
    {
        i++;    
    }
    diff = (s1[i] - s2[i]);
    return(diff);
}

int main()
{
    char a[] = "rbt";
    char b[] = "raes";
    int t = 7;
    printf("%d", ft_strncmp(a, b, t));
    return(0);
}