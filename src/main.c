/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:11:38 by maria         #+#    #+#                 */
/*   Updated: 2025/01/18 21:35:30 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(void)
{
	t_example	example_1;
	t_example	*example_2;

	if (example_init(&example_1, "Maria", 30))
		return (1);

	example_2 = example_new("Alex", 22);
	if (example_2 == NULL)
		return (example_delite(&example_1), 1);
	printf("Example 1\n  name: %s\n  age: %u\n\n", example_1.name, example_get_age(&example_1));
	printf("Example 2\n  name: %s\n  age: %u\n", example_2->name, example_get_age(example_2));
	example_destroy(&example_1);
	example_delite(example_2);
	return (0);
}
