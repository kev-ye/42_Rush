/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strjoin_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:58:51 by maddi             #+#    #+#             */
/*   Updated: 2022/01/09 19:21:06 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strjoin_launcher()
{
	load_test("strjoin", "basic test", &strjoin_basic_test);
	load_test("strjoin", "null string test", &strjoin_null_string_test);
	load_test("strjoin", "empty string test", &strjoin_empty_string_test);
	return (launch_tests());
}