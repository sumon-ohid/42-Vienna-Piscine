
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

/* int main(void)
{
    unsigned    int n = 5;
    char    s1[] = "hella";
    char    s2[] = "helly";
    int result = ft_strncmp(s1, s2, n);
    printf("%d\n", result);
    return (0);
} */