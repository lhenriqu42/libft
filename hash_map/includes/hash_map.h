/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:33:39 by lhenriqu          #+#    #+#             */
/*   Updated: 2025/03/07 14:41:43 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_MAP_H
# define HASH_MAP_H

# include "../../libft.h"

typedef struct s_h_item
{
	char			*key;
	char			*value;
	struct s_h_item	*next;
}					t_h_item;

typedef struct s_hash_table
{
	t_h_item		**items;
	size_t			size;
	size_t			count;
}					t_hash_table;

// HASH
unsigned long int	ft_hash(const char *key, size_t size);

// TABLE
t_hash_table		*ft_table_create(size_t size);

// ITEM
t_h_item			*ft_item_create(char *key, char *value);
void				ft_print_items(t_hash_table *table);
void				ft_items_destroy(t_h_item *item);
void				free_item(t_h_item *item);

// MAP
void				ft_map_insert(t_hash_table *table, char *key, char *value);
char				*ft_map_search(t_hash_table *table, char *key);
void				ft_map_delete(t_hash_table *table, char *key);
void				ft_map_destroy(t_hash_table *table);

#endif