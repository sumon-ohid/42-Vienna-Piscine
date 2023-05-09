/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:11:53 by msumon            #+#    #+#             */
/*   Updated: 2023/05/09 13:28:41 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min > max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/* int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 2;
	max = 20;
	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("Error: Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	free(range);
	return (0);
} */
