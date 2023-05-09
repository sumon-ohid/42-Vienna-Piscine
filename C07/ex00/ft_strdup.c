
#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char	*str;

	str = ft_strdup("Hello");
	if (str == NULL)
	{
		printf("Error: Memory allocation failed\n");
		return (1);
	}
	printf("%s\n", str);
	free(str);
	return (0);
}