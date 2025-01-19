/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hashstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 09:57:53 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 13:02:00 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_hashstr(const char *str)
{
	unsigned long	hash;

	hash = 5381;
	while (*str)
	{
		hash = ((hash << 5) + hash) + *str;
		str++;
	}
	return (hash);
}
