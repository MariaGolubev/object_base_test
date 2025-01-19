/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashmap.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 11:03:38 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 14:32:42 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_H
# define HASHMAP_H
# include "types.h"
# include "libft.h"
# include "btreemap.h"

typedef const char*	t_key;

typedef struct s_hashmap
{
	t_btreemap		*array;
	size_t			bucket_count;
	size_t			len;
}	t_hashmap;

int				hashmap_init(t_hashmap *this, size_t bucket_count);
void			hashmap_destroy(t_hashmap *this, void (*del)(void *));
t_hashmap		*hashmap_new(size_t bucket_count);
void			hashmap_delete(t_hashmap *this, void (*del)(void *));
size_t			hashmap_len(t_hashmap *this);
void			*hashmap_get(t_hashmap *this, t_key key);
void			*hashmap_getraw(t_hashmap *this, t_u64 key);
int				hashmap_set(t_hashmap *this, t_key key, void *value);
int				hashmap_setraw(t_hashmap *this, t_u64 key, void *value);
int				hashmap_del(t_hashmap *this, t_key key, void (*del)(void *));
int				hashmap_delraw(t_hashmap *this, t_u64 key, void (*del)(void *));

#endif