/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcmp_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:55:04 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:19:55 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strcmp_launcher(void)
{
	load_test("strcmp", "basic test", &strcmp_basic_test);
	load_test("strcmp", "null test", &strcmp_null_test);
	return (launch_tests());
}
