
#include <stdio.h>

char	bubble_sort(char *arr, int n)
{
	char	temp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n - 1)
	{
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
    return (arr[j]);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[i])
	{
		printf("%c", bubble_sort(argv[i], argc));
        printf("\n");
		i++;
	}
	return (0);
}
