#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void    ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 32 && str[i] <= 126)
        ft_putchar(str[i]);
        else
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[str[i] / 16]);
            ft_putchar("0123456789abcdef"[str[i] % 16]);
        }
        i++;   
    }
    str[i] = '\0';
}

int main(void)
{
    char *s = "Cocou\ttu vas bien?";
    ft_putstr_non_printable(s);
}