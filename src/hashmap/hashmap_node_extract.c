/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_node_extract.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:45:41 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 12:36:55 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

t_hasmap_node	*hashmap_node_extract(t_hasmap_node **node, t_u64 key)
{
	t_hasmap_node	*prev;
	t_hasmap_node	*curr;

	if (!node || !*node)
		return (NULL);
	prev = NULL;
	curr = *node;
	while (curr)
	{
		if (curr->key == key)
		{
			if (prev)
				prev->next = curr->next;
			else
				*node = curr->next;
			curr->next = NULL;
			return (curr);
		}
		prev = curr;
		curr = curr->next;
	}
	return (NULL);
}
