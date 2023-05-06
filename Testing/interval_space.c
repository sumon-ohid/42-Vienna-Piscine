/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:50:01 by msumon            #+#    #+#             */
/*   Updated: 2023/04/29 14:22:43 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that provide 3 spaces after every caracter following
by a new line. 
Allowed Function : write
./a.out "abc"
a   b   c$
if there are more that one arguments /n line. */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_interval_space(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		if (i < len)
		{
			write(1, "   ", 3);
		}
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_interval_space(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
