/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_new.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:42:03 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 21:06:23 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

t_example *example_new(const char *name, const unsigned int age)
{
	t_example   *new;

	new = (t_example *)malloc(sizeof(t_example));
	if (new == NULL)
		return (NULL);
	if (example_init(new, name, age))
		return (free(new), NULL);
	return (new);
}
