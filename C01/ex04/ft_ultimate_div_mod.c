/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:37:15 by msumon            #+#    #+#             */
/*   Updated: 2023/05/06 18:28:32 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf(">> div = %d | mod = %d \n", a, b);
	return (0);
} */
