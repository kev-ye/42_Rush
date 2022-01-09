/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:29:00 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 17:14:19 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

#include "libunit.h"
#include "function.h"

/**
 * @brief strlen tests
*/
int	strlen_launcher(void);
int	strlen_basic_test(void);
int	strlen_null_test(void);

/**
 * @brief strcpy tests
*/
int	strcpy_launcher(void);
int	strcpy_basic_test(void);
int	strcpy_bus_test(void);

/**
 * @brief strcmp tests
*/
int	strcmp_launcher(void);
int	strcmp_basic_test(void);
int	strcmp_null_test(void);

/**
 * @brief atoi tests
*/
int	atoi_launcher(void);
int	atoi_basic_test(void);
int	atoi_intmax_test(void);
int	atoi_intmin_test(void);
int atoi_intmax_overflow_test(void);
int atoi_intmin_overflow_test(void);


#endif