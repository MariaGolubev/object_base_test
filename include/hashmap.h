/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:03:38 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 12:25:44 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_H
# define HASHMAP_H
# include "types.h"
# include "libft.h"

typedef const char*	t_key;

typedef struct s_hasmap_node
{
	t_u64					key;
	void					*value;
	struct s_hasmap_node	*next;
}	t_hasmap_node;

typedef struct s_hashmap
{
	t_hasmap_node	**array;
	size_t			buccet_count;
	size_t			len;
}	t_hashmap;

t_hasmap_node	*hashmap_node_new(t_u64 key, void *value);
void			hashmap_node_delone(t_hasmap_node *this, void (*del)(void *));
void			hashmap_node_clean(t_hasmap_node *this, void (*del)(void *));
t_hasmap_node	*hashmap_node_extract(t_hasmap_node **node, t_u64 key);

int				hashmap_init(t_hashmap *this, size_t buccet_count);
void			hashmap_destroy(t_hashmap *this, void (*del)(void *));
t_hashmap		*hashmap_new(size_t buccet_count);
void			hashmap_delite(t_hashmap *this, void (*del)(void *));
size_t			hashmap_len(t_hashmap *this);
void			*hashmap_get(t_hashmap *this, t_key key);
void			*hashmap_getraw(t_hashmap *this, t_u64 key);
int				hashmap_set(t_hashmap *this, t_key key, void *value);
int				hashmap_setraw(t_hashmap *this, t_u64 key, void *value);
int				hashmap_del(t_hashmap *this, t_key key);
int 			hashmap_delraw(t_hashmap *this, t_u64 key);

#endif