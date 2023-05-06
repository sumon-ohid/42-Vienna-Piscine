/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_odd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:05:59 by msumon            #+#    #+#             */
/*   Updated: 2023/05/06 15:30:10 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_putstr(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 1;
	while (str[i] != '\0' && i < len - 1)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putstr(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
