/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:54:24 by dgutak            #+#    #+#             */
/*   Updated: 2023/04/22 14:24:04 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
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
			ft_putchar('B');
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
