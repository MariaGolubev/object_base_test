/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_set.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:28:17 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 14:00:22 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

static int	node_insert(t_btmap_node **node, t_u64 key, void *value)
{
	if (*node == NULL)
	{
		*node = btreemap_node_new(key, value);
		if (*node == NULL)
			return (1);
		return (0);
	}
	if (key == (*node)->key)
		return (1);
	if (key < (*node)->key)
		return (node_insert(&(*node)->left, key, value));
	return (node_insert(&(*node)->right, key, value));
}

int	btreemap_set(t_btreemap *this, t_u64 key, void *value)
{
	if (node_insert(&this->root, key, value))
		return (1);
	this->len++;
	return (0);
}
