/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_init.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:40:53 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 14:21:14 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

int	hashmap_init(t_hashmap *this, size_t bucket_count)
{
	int	i;

	this->array = (t_btreemap *)ft_calloc(bucket_count, sizeof(t_btreemap));
	if (!this->array)
		return (1);
	i = 0;
	while (i < (int)bucket_count)
	{
		btreemap_init(&this->array[i]);
		i++;
	}
	this->bucket_count = bucket_count;
	this->len = 0;
	return (0);
}
