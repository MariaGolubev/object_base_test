/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_set.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:47 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 13:54:30 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"
#include "stdio.h"

int	hashmap_setraw(t_hashmap *this, t_u64 key, void *value)
{
	t_btreemap	*node;

	node = this->array[key % this->bucket_count];
	if (node)
	{
		if (btreemap_set(node, key, value))
			return (1);
	}
	else
	{
		node = btreemap_new();
		if (!node)
			return (1);
		if (btreemap_set(node, key, value))
			return (1);
		this->array[key % this->bucket_count] = node;
	}
	this->len++;
	return (0);
}

int	hashmap_set(t_hashmap *this, t_key key, void *value)
{
	return (hashmap_setraw(this, ft_hashstr(key), value));
}
