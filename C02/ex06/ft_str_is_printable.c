/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:46:34 by msumon            #+#    #+#             */
/*   Updated: 2023/04/24 16:54:24 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/* int	main(void)
{
	char str1[] = "aaa43434@@qaa";
	printf("%d\n", ft_str_is_printable(str1));
	return (0);
} */