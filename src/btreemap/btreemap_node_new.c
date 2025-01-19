/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_node_new.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:18:35 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 10:43:51 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

t_btmap_node	*btreemap_node_new(t_u64 key, void *value)
{
	t_btmap_node	*node;

	node = malloc(sizeof(t_btmap_node));
	if (node == NULL)
		return (NULL);
	node->key = key;
	node->value = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
