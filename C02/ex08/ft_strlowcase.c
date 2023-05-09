
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char str[] = "HeLLo";
	ft_strlowcase(str);
	printf("%s", ft_strlowcase(str));
	return (0);
} */