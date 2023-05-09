
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

/* int	main(void)
{
	int	i;

	i = ft_strlen("Anything");
	printf("\n");
	printf("String Length = %d\n", i);
	return (0);
} */
