/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_init.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:40:53 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 13:54:18 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

int	hashmap_init(t_hashmap *this, size_t bucket_count)
{
	this->array
		= (t_btreemap **)ft_calloc(bucket_count, sizeof(t_btreemap *));
	if (!this->array)
		return (1);
	this->bucket_count = bucket_count;
	this->len = 0;
	return (0);
}
