/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_set.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:47 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 12:27:29 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

int	hashmap_setraw(t_hashmap *this, t_u64 key, void *value)
{
	t_hasmap_node	*node;
	t_hasmap_node	*new;

	node = this->array[key % this->buccet_count];
	while (node)
	{
		if (node->key == key)
			return (1);
		node = node->next;
	}
	new = hashmap_node_new(key, value);
	if (!new)
		return (1);
	new->next = this->array[key % this->buccet_count];
	this->array[key % this->buccet_count] = new;
	this->len++;
	return (0);
}

int	hashmap_set(t_hashmap *this, t_key key, void *value)
{
	return (hashmap_setraw(this, ft_hashstr(key), value));
}
