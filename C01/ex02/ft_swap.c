#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i;
    int k;
    i = 3;
    k = 5;
    ft_swap(&i, &k);
    printf("%d %d", i, k);
    return(0);
}