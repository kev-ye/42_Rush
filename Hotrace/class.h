/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:11:15 by kaye              #+#    #+#             */
/*   Updated: 2021/12/12 18:56:39 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

# include "defs.h"

enum	e_ft
{
	GNL,
	PUTSTR,
	STRLEN,
	GETMAP,
	SETMAP,
	GETHASH
};

typedef struct s_chrono	t_chrono;
struct	s_chrono
{
	char		*ft_name;
	clock_t		start;
	clock_t		end;
	uint32_t	count;
	float		total_time;
	float		avg_time;
};

/** @brief hash map */
typedef struct s_map
{
	char			*key;
	char			*value;
	struct s_map	*next;
}	t_map;

/** @brief data */
typedef struct s_data
{
	char			*key;
	char			*value;
	struct s_data	*next;
}	t_data;

/** @brief singleton */
typedef struct s_hr
{
	uint64_t	len;
	uint64_t	save_index;
	char		*buff;
	t_data		data;
	t_map		*hash_map[HASH_MAX];
}	t_hr;

/** @brief gnl */
typedef struct s_set
{
	int				fd;
	char			*str;
}	t_set;

#endif