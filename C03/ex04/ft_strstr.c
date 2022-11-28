#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int k;
    k = 0;
    i = 0;

    while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] != '\0' && str[i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (&str[i]);
			++k;
		}
		++i;
	}
	return (0);
}

int main()
{
    char str[] = "Bella atmosfera";
    char f[] = "at";
    printf("%s", ft_strstr(str, f));
}