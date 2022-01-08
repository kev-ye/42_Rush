/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:50:12 by kaye              #+#    #+#             */
/*   Updated: 2022/01/08 23:12:05 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

#include "class.h"
#include "defs.h"

/** 
 * @brief main function
 */
void	load_test(char const *func_name, char const *test_name, int (*func)(void));
void	clean_tests(void);
int		launch_tests(void);

/** 
 * @brief utils
 */
size_t	unit_strlen(const char *s);
void	unit_putstr_fd(char const *s, int fd);
void	unit_putendl_fd(char const *s, int fd);
void	unit_bzero(void *s, size_t n);
void	*unit_calloc(size_t count, size_t size);
t_unit	*unit_singleton(void);
void	unit_clean(void);

#endif