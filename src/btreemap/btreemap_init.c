/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_init.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:18:17 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 10:24:24 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

void	btreemap_init(t_btreemap *this)
{
	this->root = NULL;
	this->len = 0;
}
