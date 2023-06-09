
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}

/* int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int i = 0;

    printf("Original array:\n");
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }

    ft_rev_int_tab(arr, size);

    i = 0;
    printf("\nReversed array:\n");
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }

    return (0);
} */
