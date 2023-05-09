
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	factorial;

	factorial = 1;
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (factorial);
}

/* int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
} */

// n! = n * (n - 1) * (n - 1) * .. factorial