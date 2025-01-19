/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_destroy.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:24:36 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 10:24:49 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

void	btreemap_destroy(t_btreemap *this, void (*del)(void *))
{
	btreemap_node_clean(this->root, del);
	this->root = NULL;
	this->len = 0;
}
