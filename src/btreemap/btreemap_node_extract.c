/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_node_extract.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:44:43 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 13:57:11 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

static t_btmap_node	*extract(t_btmap_node **node, t_u64 key)
{
	t_btmap_node	*tmp;

	if ((*node)->left == NULL)
	{
		tmp = *node;
		*node = (*node)->right;
		return (tmp);
	}
	if ((*node)->right == NULL)
	{
		tmp = *node;
		*node = (*node)->left;
		return (tmp);
	}
	tmp = btreemap_node_extract(&(*node)->left, key);
	if (tmp == NULL)
		return (NULL);
	tmp->left = (*node)->left;
	tmp->right = (*node)->right;
	*node = NULL;
	return (tmp);
}

t_btmap_node	*btreemap_node_extract(t_btmap_node **node, t_u64 key)
{
	if (*node == NULL)
		return (NULL);
	if (key == (*node)->key)
		return (extract(node, key));
	if (key < (*node)->key)
		return (btreemap_node_extract(&(*node)->left, key));
	return (btreemap_node_extract(&(*node)->right, key));
}
