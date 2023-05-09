/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:40:00 by msumon            #+#    #+#             */
/*   Updated: 2023/05/09 16:32:58 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
		return (str = (char *)malloc(1));
	i = 0;
	while (i < size)
	{
		if (!str)
			str = ft_strdup(strs[i]);
		else
		{
			str = ft_strcat(str, sep);
			str = ft_strcat(str, strs[i]);
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char *strs[] = {"Hello", "world!", "Don't", "Panic.", NULL};
	char *sep = " ";
	char *result = ft_strjoin(4, strs, sep);
	if (result == NULL)
	{
		printf("Error: ft_strjoin returned NULL.\n");
		return (1);
	}
	printf("%s\n", result);
	free(result);
	return (0);
} */
