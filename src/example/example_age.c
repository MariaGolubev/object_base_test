/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_age.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:49:48 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 22:18:05 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

/**
 * @brief Set the age of an example object.
 * 
 * @param this Pointer to the example object.
 * @param age The new age of the example.
 */
void	example_set_age(t_example *this, const t_u32 age)
{
	this->_age = age;
}

/**
 * @brief Get the age of an example object.
 * 
 * @param this Pointer to the example object.
 * @return unsigned int The age of the example.
 */
t_u32	example_get_age(t_example *this)
{
	return (this->_age);
}
