/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_del.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:51:05 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 13:53:37 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

int	hashmap_delraw(t_hashmap *this, t_u64 key, void (*del)(void *))
{
	t_btreemap	*node;

	node = this->array[key % this->bucket_count];
	if (node == NULL)
		return (1);
	if (btreemap_del(node, key, del))
		return (1);
	this->len--;
	return (0);
}

int	hashmap_del(t_hashmap *this, t_key key, void (*del)(void *))
{
	return (hashmap_delraw(this, ft_hashstr(key), del));
}
