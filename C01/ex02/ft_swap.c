/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:08:27 by msumon            #+#    #+#             */
/*   Updated: 2023/05/06 18:28:16 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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