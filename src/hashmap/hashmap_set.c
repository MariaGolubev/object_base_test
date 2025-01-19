/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_set.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:47 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 14:22:58 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"
#include "stdio.h"

int	hashmap_setraw(t_hashmap *this, t_u64 key, void *value)
{
	if (btreemap_set(this->array + (key % this->bucket_count), key, value))
		return (1);
	this->len++;
	return (0);
}

int	hashmap_set(t_hashmap *this, t_key key, void *value)
{
	return (hashmap_setraw(this, ft_hashstr(key), value));
}
