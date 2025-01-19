/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_get.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:08 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 13:54:01 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	*hashmap_getraw(t_hashmap *this, t_u64 key)
{
	t_btreemap	*node;

	if (!this)
		return (NULL);
	node = this->array[key % this->bucket_count];
	if (node)
		return (btreemap_get(node, key));
	return (NULL);
}

void	*hashmap_get(t_hashmap *this, t_key key)
{
	return (hashmap_getraw(this, ft_hashstr(key)));
}
