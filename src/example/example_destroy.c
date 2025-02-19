/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_destroy.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:43:36 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 22:57:15 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

/**
 * @brief Destroy an example object.
 * 
 * @param this Pointer to the example object.
 */
void	example_destroy(t_example *this)
{
	free(this->name);
	this->name = NULL;
}
