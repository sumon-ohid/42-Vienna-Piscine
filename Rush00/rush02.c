/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:22:42 by msumon            #+#    #+#             */
/*   Updated: 2023/04/22 17:12:06 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	header(int x);
void	wall(int x);
void	foot(int x);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	n;

	n = 1;
	while (n <= y)
	{
		if (n == 1)
		{
			header(x);
		}
		else if (n == y)
		{
			foot(x);
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
		if (i == 1 || i == x)
		{
			ft_putchar('A');
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

void	foot(int x)
{
	int	k;

	k = 1;
	while (k <= x)
	{
		if (k == 1 || k == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		k++;
	}
	if (x > 0)
	{
		ft_putchar('\n');
	}
}
