/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_get.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:08 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 11:48:08 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	*hashmap_get(t_hashmap *this, t_key key)
{
	t_u64 hash;
	t_hasmap_node *node;

	if (!this || !key)
		return (NULL);
	hash = ft_hashstr(key);
	node = this->array[hash % this->buccet_count];
	while (node)
	{
		if (node->key == hash)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
