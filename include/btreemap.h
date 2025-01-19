/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btreemap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: maria <maria@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/19 10:05:57 by maria         #+#    #+#                 */
/*   Updated: 2025/01/19 14:02:47 by maria         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREEMAP_H
# define BTREEMAP_H

# include <unistd.h>
# include <stdlib.h>
# include "types.h"

typedef struct s_btmap_node
{
	t_u64				key;
	void				*value;
	struct s_btmap_node	*left;
	struct s_btmap_node	*right;
}	t_btmap_node;

typedef struct s_btreemap
{
	t_btmap_node	*root;
	size_t			len;
}	t_btreemap;

t_btmap_node	*btreemap_node_new(t_u64 key, void *value);
void			btemap_node_delone(t_btmap_node *this, void (*del)(void *));
void			btreemap_node_clean(t_btmap_node *this, void (*del)(void *));
t_btmap_node	*btreemap_node_extract(t_btmap_node **node, t_u64 key);

void			btreemap_init(t_btreemap *this);
void			btreemap_destroy(t_btreemap *this, void (*del)(void *));
t_btreemap		*btreemap_new(void);
void			btreemap_delete(t_btreemap *this, void (*del)(void *));
size_t			btreemap_len(t_btreemap *this);
void			*btreemap_get(t_btreemap *this, t_u64 key);
int				btreemap_set(t_btreemap *this, t_u64 key, void *value);
int				btreemap_del(t_btreemap *this, t_u64 key, void (*del)(void *));

#endif