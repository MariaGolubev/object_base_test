/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_destroy.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:16 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 12:48:58 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	hashmap_destroy(t_hashmap *this, void (*del)(void *))
{
	size_t	i;

	i = 0;
	while (i < this->buccet_count)
	{
		if (this->array[i])
		{
			hashmap_node_clean(this->array[i], del);
			this->array[i] = NULL;
		}
		i++;
	}
	free(this->array);
	this->array = NULL;
	this->buccet_count = 0;
	this->len = 0;
}
