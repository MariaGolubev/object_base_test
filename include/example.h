/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:42:57 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 22:35:53 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXAMPLE_H
# define EXAMPLE_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# include "types.h"


/**
 * @file example.h
 * @brief Object base structure with a public field `name` and a private field `_age`.
 * 
 * Note: Ensure to properly destroy or delete the example object using
 * `example_destroy` or `example_delite` to avoid memory leaks.
 */
typedef struct s_example
{
	char			*name;
	unsigned int	_age;
}	t_example;

int			example_init(t_example *this, const char *name, const t_u32 age);
t_example	*example_new(const char *name, const t_u32 age);
void		example_destroy(t_example *this);
void		example_delite(t_example *this);
t_u32		example_get_age(t_example *this);
void		example_set_age(t_example *this, const t_u32 age);

#endif