/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_del.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:36:20 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 13:36:33 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

int	btreemap_del(t_btreemap *this, t_u64 key, void (*del)(void *))
{
	t_btmap_node	*node;

	node = btreemap_node_extract(&this->root, key);
	if (node == NULL)
		return (1);
	btemap_node_delone(node, del);
	this->len--;
	return (0);
}
