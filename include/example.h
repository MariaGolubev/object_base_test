/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:42:57 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 22:08:31 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXAMPLE_H
# define EXAMPLE_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# include "types.h"

/**
 * struct s_example - Object Base struct
 * @name: Name of the example
 * @_age: Private age of the example
 *
 * Note: It is mandatory to call either example_destroy or example_delite
 * to properly free the allocated resources.
 */
typedef struct s_example
{
	char			*name;
	unsigned int	_age;
}	t_example;

int			example_init(t_example *this, const char *name, const t_uint age);
t_example	*example_new(const char *name, const t_uint age);
void		example_destroy(t_example *this);
void		example_delite(t_example *this);
t_uint		example_get_age(t_example *this);
void		example_set_age(t_example *this, const t_uint age);

#endif