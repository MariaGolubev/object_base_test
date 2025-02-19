/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/18 20:11:38 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 14:37:33 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"
#include "btreemap.h"
#include "hashmap.h"

void	test_example(void)
{
	t_example	example_1;
	t_example	*example_2;

	if (example_init(&example_1, "Maria", 30))
		return ;
	example_2 = example_new("Alex", 22);
	if (example_2 == NULL)
		return (example_destroy(&example_1), (void)1);
	printf("Example 1\n  name: %s\n  age: %u\n\n",
		example_1.name, example_get_age(&example_1));
	printf("Example 2\n  name: %s\n  age: %u\n",
		example_2->name, example_get_age(example_2));
	example_destroy(&example_1);
	example_delite(example_2);
	printf("-------------------------------------------------------------\n");

}

void	test_btreemap(void)
{
	t_btreemap	btreemap;

	btreemap_init(&btreemap);
	btreemap_set(&btreemap, ft_hashstr("key1"), "Maria");
	btreemap_set(&btreemap, ft_hashstr("key2"), "Alex");
	btreemap_del(&btreemap, ft_hashstr("key1"), NULL);
	btreemap_set(&btreemap, ft_hashstr("key1"), "John");
	printf("key1: %s\n", (char *)btreemap_get(&btreemap, ft_hashstr("key1")));
	printf("key2: %s\n", (char *)btreemap_get(&btreemap, ft_hashstr("key2")));
	btreemap_destroy(&btreemap, NULL);
	printf("-------------------------------------------------------------\n");

}

void	test_hashmap(void)
{
	t_hashmap	*hashmap;

	hashmap = hashmap_new(10);
	if (hashmap == NULL)
		return ;
	hashmap_set(hashmap, "key1", "Maria");
	hashmap_set(hashmap, "key2", "Alex");
	hashmap_set(hashmap, "key3", "John");
	if (hashmap_set(hashmap, "key1", "Maria") == 1)
		printf("key1 already exists\n");
	hashmap_del(hashmap, "key1", NULL);
	hashmap_setraw(hashmap, ft_hashstr("key1"), "Maria");
	printf("key1: %s\n", (char *)hashmap_get(hashmap, "key1"));
	printf("key2: %s\n", (char *)hashmap_get(hashmap, "key2"));
	printf("key3: %s\n", (char *)hashmap_get(hashmap, "key3"));
	hashmap_del(hashmap, "key1", NULL);
	hashmap_del(hashmap, "NOTHING", NULL);
	printf("key1: %s\n", (char *)hashmap_get(hashmap, "key1"));
	printf("Hashmap length: %lu\n", hashmap_len(hashmap));
	hashmap_delete(hashmap, NULL);
	printf("-------------------------------------------------------------\n");

}

void	test_hash_functions(void)
{
	t_u64		hash;
	const char	*map[9];
	int			i;

	i = 0;
	map[0] = "Hello world";
	map[1] = "Hello world!";
	map[2] = "BlaBla!!";
	map[3] = "BlaBla!";
	map[4] = "Cow";
	map[5] = "BlaBla";
	map[6] = "1";
	map[7] = "2";
	map[8] = NULL;
	while (map[i])
	{
		hash = ft_hashstr(map[i]);
		printf("Hash of \"%s\": %lu\n", map[i], hash);
		i++;
	}
	printf("-------------------------------------------------------------\n");
}

int	main(void)
{
	t_hashmap	*hashmap;
	int			i;
	char		*key;
	
	test_example();
	test_btreemap();
	test_hash_functions();
	test_hashmap();
	hashmap = hashmap_new(1000);
	if (hashmap == NULL)
		return (1);
	i = 0;
	while (i < 1000)
	{
		key = ft_itoa(i++);
		if (hashmap_set(hashmap, key, key))
			printf("Failed to set key: %s\n", key);
	}
	i = 0;
	printf("Hashmap length: %lu\n", hashmap_len(hashmap));
	hashmap_delete(hashmap, free);
	return (0);
}
