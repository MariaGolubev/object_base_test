/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_delraw.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 12:15:04 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 12:16:14 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"


int	hashmap_delraw(t_hashmap *this, t_u64 key) {
	t_u64			hash;
	t_hasmap_node	*node;
	t_hasmap_node	*prev;

	node = this->array[key % this->buccet_count];
	prev = NULL;
	while (node)
	{
		if (node->key == key)
		{
			if (prev)
				prev->next = node->next;
			else
				this->array[key % this->buccet_count] = node->next;
			hashmap_node_delone(node, NULL);
			this->len--;
			return (0);
		}
		prev = node;
		node = node->next;
	}
	return (1);
}
