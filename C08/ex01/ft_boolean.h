/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:40:07 by msumon            #+#    #+#             */
/*   Updated: 2023/05/09 12:19:07 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# include <stdbool.h>

typedef bool	t_bool;

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(nbr) (((nbr) % 2) == 0)
# define ODD(nbr) (((nbr) % 2) != 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
