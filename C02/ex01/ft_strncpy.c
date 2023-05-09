
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	src[100] = "Hello, world!";;
	char	dest[100];
 	unsigned int    n = 5;
	ft_strncpy(dest, src, n);
	printf("Source string: %s\n", src);
	printf("Destination string: %s\n", dest);
	return (0);
} */