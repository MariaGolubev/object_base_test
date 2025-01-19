/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_node_new.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:45:29 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 11:45:33 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

t_hasmap_node	*hashmap_node_new(t_u64 key, void *value)
{
	t_hasmap_node *node;

	node = (t_hasmap_node *)malloc(sizeof(t_hasmap_node));
	if (!node)
		return (NULL);
	node->key = key;
	node->value = value;
	node->next = NULL;
	return (node);
}
