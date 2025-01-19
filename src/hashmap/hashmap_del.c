/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_del.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:51:05 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 11:51:44 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

int	hashmap_del(t_hashmap *this, t_key key)
{
	t_u64			hash;
	t_hasmap_node	*node;
	t_hasmap_node	*prev;

	hash = ft_hashstr(key);
	node = this->array[hash % this->buccet_count];
	prev = NULL;
	while (node)
	{
		if (node->key == hash)
		{
			if (prev)
				prev->next = node->next;
			else
				this->array[hash % this->buccet_count] = node->next;
			hashmap_node_delone(node, NULL);
			this->len--;
			return (0);
		}
		prev = node;
		node = node->next;
	}
	return (1);
}
