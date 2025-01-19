/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_node_clean.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:47:01 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 12:37:00 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	hashmap_node_clean(t_hasmap_node *this, void (*del)(void *))
{
	t_hasmap_node	*temp;

	while (this)
	{
		temp = this->next;
		hashmap_node_delone(this, del);
		this = temp;
	}
}
