/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_init.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:42:29 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 22:18:11 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

/**
 * @brief Initialize an example object.
 * 
 * @param this Pointer to the example object.
 * @param name The name of the example.
 * @param age The age of the example.
 * @return int 0 on success, 1 on failure.
 */
int	example_init(t_example *this, const char *name, const t_u32 age)
{
	this->name = strdup(name);
	if (this->name == NULL)
		return (1);
	this->_age = age;
	return (0);
}
