/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btemap_node_delite.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:40:17 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 10:43:51 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

void	btemap_node_delone(t_btmap_node *this, void (*del)(void *))
{
	if (del != NULL)
		del(this->value);
	free(this);
}
