
#include <unistd.h>

void	ft_is_negative(int n)

{
	char	c;

	if (n >= 0)
	{
		c = 'P';
	}
	else
	{
		c = 'N';
	}
	write(1, &c, 1);
}

/* int	main(void)
{
	ft_is_negative(-10);
	return (0);
} */
