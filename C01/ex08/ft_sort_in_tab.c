#include <unistd.h>
#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i;
    i = 0;
    while(size >= 0)
    {
        i = 0;
        while(i < size - 1)
        {
            if(tab[i+1] < tab[i])
            {
                temp = tab[i];
                tab[i] = tab[i+1];
                tab [i+1] = temp;
            }
            i++;
        }
        size--;
    }
}

int main()
{
    int tab[6] = {3, 1, 7, 5, 2, 0};
    int size = 6;
    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}