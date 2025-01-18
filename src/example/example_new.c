/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   example_new.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:42:03 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 22:54:37 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "example.h"

/**
 * @brief Create a new example object.
 * 
 * @param name The name of the example.
 * @param age The age of the example.
 * @return t_example* Pointer to the new example object, or NULL on failure.
 */
t_example	*example_new(const char *name, const t_u32 age)
{
	t_example	*new;

	new = (t_example *)malloc(sizeof(t_example));
	if (new == NULL)
		return (NULL);
	if (example_init(new, name, age))
		return (free(new), NULL);
	return (new);
}
