/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_init.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:42:29 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 21:06:23 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

int example_init(t_example *this, const char *name, const unsigned int age)
{
	this->name = strdup(name);
	if (this->name == NULL)
		return (1);
	this->_age = age;
	return (0);
}
