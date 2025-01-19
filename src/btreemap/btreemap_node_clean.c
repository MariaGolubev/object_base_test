/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_node_clean.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:21:27 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 11:32:08 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

void	btreemap_node_clean(t_btmap_node *this, void (*del)(void *))
{
	if (this == NULL)
		return ;
	btreemap_node_clean(this->left, del);
	btreemap_node_clean(this->right, del);
	btemap_node_delone(this, del);
}
