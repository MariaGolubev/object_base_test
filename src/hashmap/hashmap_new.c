/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_new.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:40:37 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 12:36:15 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

t_hashmap	*hashmap_new(size_t buccet_count)
{
	t_hashmap	*map;

	map = (t_hashmap *)malloc(sizeof(t_hashmap));
	if (!map)
		return (NULL);
	hashmap_init(map, buccet_count);
	return (map);
}
