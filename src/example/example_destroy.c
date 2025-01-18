/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_destroy.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:43:36 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 21:06:22 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

void example_destroy(t_example *this)
{
	free(this->name);
}
