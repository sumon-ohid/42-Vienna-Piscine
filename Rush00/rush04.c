/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:54:24 by dgutak            #+#    #+#             */
/*   Updated: 2023/04/22 13:13:07 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	header(int x);
void	footer(int x);
void	wall(int x);
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
			footer(x);
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

void	footer(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('C');
		}
		else if (i == x)
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
