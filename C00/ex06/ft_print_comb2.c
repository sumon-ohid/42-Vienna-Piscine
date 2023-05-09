
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_format(int i, int j)
{
	ft_putchar('0' + i / 10);
	ft_putchar('0' + i % 10);
	ft_putchar(' ');
	ft_putchar('0' + j / 10);
	ft_putchar('0' + j % 10);
	if (i != 98)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	m;
	int	n;

	m = 0;
	while (m <= 98)
	{
		n = m + 1;
		while (n <= 99)
		{
			ft_format(m, n);
			n++;
		}
		m++;
	}
}

/* int	main(void)
{
	ft_print_comb2();
	return (0);
} */
