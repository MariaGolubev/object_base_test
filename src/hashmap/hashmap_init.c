/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_init.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:40:53 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 11:43:13 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "hashmap.h"

int	hashmap_init(t_hashmap *this, size_t buccet_count)
{
	this->array = (t_hasmap_node **)ft_calloc(buccet_count, sizeof(t_hasmap_node *));
	if (!this->array)
		return (1);
	this->buccet_count = buccet_count;
	this->len = 0;
	return (0);
}
