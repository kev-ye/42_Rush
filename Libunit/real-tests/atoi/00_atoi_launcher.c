/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:12:25 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 17:16:04 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	atoi_launcher(void)
{
	load_test("atoi", "basic test", &atoi_basic_test);
	load_test("atoi", "inmax test", &atoi_intmax_test);
	load_test("atoi", "inmin test", &atoi_intmin_test);
	load_test("atoi", "inmax overflow test", &atoi_intmax_overflow_test);
	load_test("atoi", "inmin overflow test", &atoi_intmin_overflow_test);
	return (launch_tests());
}
