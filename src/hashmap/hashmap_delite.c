/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap_delite.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:48:26 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 11:48:33 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	hashmap_delite(t_hashmap *this, void (*del)(void *))
{
		hashmap_destroy(this, del);
		free(this);
}
