
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src [j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* int main(void)
{
    unsigned int i = 3;
    char str1[12] = "Hello";
    char str2[] = " world!";
    ft_strncat(str1, str2, i);
    printf("%s\n", str1);
    return (0);
} */
