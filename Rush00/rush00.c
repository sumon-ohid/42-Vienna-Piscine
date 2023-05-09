
#include <unistd.h>

void	header(int x);
void	wall(int x);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	n;

	n = 1;
	while (n <= y)
	{
		if (n == 1 || n == y)
		{
			header(x);
		}
		else
		{
			wall(x);
		}
		n++;
	}
}

void	header(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
	if (x > 0)
	{
		ft_putchar('\n');
	}
}

void	wall(int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		j++;
	}
	if (x > 0)
	{
		ft_putchar('\n');
	}
}
