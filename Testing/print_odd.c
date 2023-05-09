
#include <unistd.h>

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

void	ft_putstr(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 1;
	while (str[i] != '\0' && i < len - 1)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putstr(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
