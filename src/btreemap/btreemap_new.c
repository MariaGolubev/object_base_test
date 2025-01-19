/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap_new.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:25:03 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 10:25:17 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "btreemap.h"

t_btreemap	*btreemap_new(void)
{
	t_btreemap	*map;

	map = malloc(sizeof(t_btreemap));
	if (map == NULL)
		return (NULL);
	btreemap_init(map);
	return (map);
}
