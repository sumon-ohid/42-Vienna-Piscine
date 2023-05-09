
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
    int x;
    int y;

	x = 10;
	y = 20;
	printf("Before swap >> %d | %d \n", x, y);
	ft_swap(&x, &y);
	printf("After swap >> %d | %d \n", x, y);
	return (0);
} */