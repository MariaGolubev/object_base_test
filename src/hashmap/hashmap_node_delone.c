/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_node_delone.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:45:22 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 11:45:23 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	hashmap_node_delone(t_hasmap_node *this, void (*del)(void *))
{
	if (del)
		del(this->value);
	free(this);
}
