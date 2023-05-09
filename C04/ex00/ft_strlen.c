
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int main(void)
{
    int a;

    a = ft_strlen("Hello World!");
    printf("%d\n", a);
    return (0);
} */