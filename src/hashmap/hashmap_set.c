/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_set.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:47 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 11:50:13 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

int	hashmap_set(t_hashmap *this, t_key key, void *value)
{
	t_u64			hash;
	t_hasmap_node	*node;
	t_hasmap_node	*new;

	hash = ft_hashstr(key);
	node = this->array[hash % this->buccet_count];
	while (node)
	{
		if (node->key == hash)
			return (1);
		node = node->next;
	}
	new = hashmap_node_new(hash, value);
	if (!new)
		return (1);
	new->next = this->array[hash % this->buccet_count];
	this->array[hash % this->buccet_count] = new;
	this->len++;
	return (0);
}
