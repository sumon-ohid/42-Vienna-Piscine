
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	src[100] = "Hello, world!";;
	char	dest[100];

	ft_strcpy(dest, src);
	printf("Source string: %s\n", src);
	printf("Destination string: %s\n", dest);
	return (0);
}
 */