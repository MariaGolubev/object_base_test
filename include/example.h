/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:42:57 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 21:12:21 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXAMPLE_H
# define EXAMPLE_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_example
{
	char			*name;
	unsigned int	_age;
}	t_example;

int				example_init(t_example *this, const char *name, const unsigned int age);
t_example		*example_new(const char *name, const unsigned int age);
void			example_destroy(t_example *this);
void			example_delite(t_example *this);
unsigned int	example_get_age(t_example *this);
void			example_set_age(t_example *this, const unsigned int age);

#endif