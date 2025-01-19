/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_destroy.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:16 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 14:33:33 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	hashmap_destroy(t_hashmap *this, void (*del)(void *))
{
	int	i;

	i = 0;
	while (i < (int)this->bucket_count)
	{
		btreemap_destroy(this->array + i, del);
		i++;
	}
	free(this->array);
	this->array = NULL;
	this->bucket_count = 0;
	this->len = 0;
}
