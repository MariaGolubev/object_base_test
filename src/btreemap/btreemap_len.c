/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_len.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:26:49 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 10:27:01 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

size_t	btreemap_len(t_btreemap *this)
{
	return (this->len);
}
