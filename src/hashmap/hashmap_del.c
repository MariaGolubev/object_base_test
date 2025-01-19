/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_del.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:51:05 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 12:35:34 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

int	hashmap_delraw(t_hashmap *this, t_u64 key)
{
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

int	hashmap_del(t_hashmap *this, t_key key)
{
	return (hashmap_delraw(this, ft_hashstr(key)));
}
