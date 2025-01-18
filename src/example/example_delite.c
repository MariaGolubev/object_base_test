/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_delite.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:44:12 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 21:51:41 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

/**
 * @brief Delete an example object.
 * 
 * @param this Pointer to the example object.
 */
void	example_delite(t_example *this)
{
	example_destroy(this);
	free(this);
}
