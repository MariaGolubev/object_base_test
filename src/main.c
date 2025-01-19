/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:11:38 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 12:23:35 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"
#include "btreemap.h"
#include "hashmap.h"

int	main(void)
{
	t_example	example_1;
	t_example	*example_2;
	t_btreemap	btreemap;
	t_hashmap	hashmap;

	if (example_init(&example_1, "Maria", 30))
		return (1);
	example_2 = example_new("Alex", 22);
	if (example_2 == NULL)
		return (example_destroy(&example_1), 1);
	printf("Example 1\n  name: %s\n  age: %u\n\n",
		example_1.name, example_get_age(&example_1));
	printf("Example 2\n  name: %s\n  age: %u\n",
		example_2->name, example_get_age(example_2));
	example_destroy(&example_1);
	example_delite(example_2);
	printf("-------------------------------------------------------------\n");
	btreemap_init(&btreemap);
	btreemap_set(&btreemap, ft_hashstr("key1"), "Maria");
	btreemap_set(&btreemap, ft_hashstr("key2"), "Alex");
	btreemap_set(&btreemap, ft_hashstr("key3"), "John");
	printf("key1: %s\n", (char *)btreemap_get(&btreemap, ft_hashstr("key1")));
	printf("key2: %s\n", (char *)btreemap_get(&btreemap, ft_hashstr("key2")));
	btreemap_destroy(&btreemap, NULL);
	printf("-------------------------------------------------------------\n");
	printf("Hash for 'Hello world': %lu %lu\n", ft_hashstr("Hello world"), ft_hashstr("Hello world") % 4);
	printf("Hash for 'Hello world!': %lu %lu\n", ft_hashstr("Hello world!"), ft_hashstr("Hello world1") % 4);
	printf("Hash for 'BlaBla!!': %lu %lu\n", ft_hashstr("BlaBla!!"), ft_hashstr("BlaBla!!") % 4);
	printf("Hash for 'BlaBla!': %lu %lu\n", ft_hashstr("BlaBla!"), ft_hashstr("BlaBla!") % 4);
	printf("Hash for 'BlaBla': %lu %lu\n", ft_hashstr("BlaBla"), ft_hashstr("BlaBla") % 4);
	printf("-------------------------------------------------------------\n");
	hashmap_init(&hashmap, 100);
	hashmap_set(&hashmap, "key1", "Maria");
	hashmap_set(&hashmap, "key2", "Alex");
	hashmap_set(&hashmap, "key3", "John");
	if (hashmap_set(&hashmap, "key1", "Maria") == 1)
		printf("key1 already exists\n");
	hashmap_del(&hashmap, "key1");
	hashmap_setraw(&hashmap, ft_hashstr("key1"), "Maria");
	printf("key1: %s\n", (char *)hashmap_get(&hashmap, "key1"));
	printf("key2: %s\n", (char *)hashmap_get(&hashmap, "key2"));
	printf("key3: %s\n", (char *)hashmap_get(&hashmap, "key3"));
	hashmap_del(&hashmap, "key1");
	hashmap_del(&hashmap, "NOTHING");
	printf("key1: %s\n", (char *)hashmap_get(&hashmap, "key1"));
	printf("Hashmap length: %lu\n", hashmap_len(&hashmap));
	hashmap_destroy(&hashmap, NULL);
	return (0);
}
