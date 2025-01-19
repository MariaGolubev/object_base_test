/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_delete.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:25:27 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 14:02:47 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

void	btreemap_delete(t_btreemap *this, void (*del)(void *))
{
	btreemap_destroy(this, del);
	free(this);
}
