/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_delite.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:44:12 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 21:06:20 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

void example_delite(t_example *this)
{
	example_destroy(this);
	free(this);
}
