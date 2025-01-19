/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_delite.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:25:27 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 10:25:37 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

void	btreemap_delite(t_btreemap *this, void (*del)(void *))
{
	btreemap_destroy(this, del);
	free(this);
}
