/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_get.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:08 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 14:23:35 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	*hashmap_getraw(t_hashmap *this, t_u64 key)
{
	if (!this)
		return (NULL);
	return (btreemap_get(this->array + (key % this->bucket_count), key));
}

void	*hashmap_get(t_hashmap *this, t_key key)
{
	return (hashmap_getraw(this, ft_hashstr(key)));
}
