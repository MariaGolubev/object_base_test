/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_get.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:27:14 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 10:43:51 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

void	*btreemap_get(t_btreemap *this, t_u64 key)
{
	t_btmap_node	*node;

	node = this->root;
	while (node != NULL)
	{
		if (key == node->key)
			return (node->value);
		if (key < node->key)
			node = node->left;
		else
			node = node->right;
	}
	return (NULL);
}
