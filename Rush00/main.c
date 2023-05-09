
#include <stdio.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = -1;
	if (argc == 3)
	{
		while (argv[1][++i] != '\0')
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
				return (0);
			x = x * 10 + argv[1][i] - '0';
		}
		i = -1;
		while (argv[2][++i] != '\0')
		{
			if (argv[2][i] < '0' || argv[2][i] > '9')
				return (0);
			y = y * 10 + argv[2][i] - '0';
		}
	}
	rush(x, y);
}
