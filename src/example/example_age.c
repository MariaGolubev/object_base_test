/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_age.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:49:48 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 21:06:57 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

void example_set_age(t_example *this, const unsigned int age)
{
	this->_age = age;
}

unsigned int example_get_age(t_example *this)
{
	return (this->_age);
}
