/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcpy_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:47:26 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:13:50 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strcpy_launcher(void)
{
	load_test("strcpy", "basic test", &strcpy_basic_test);
	load_test("strcpy", "bus test", &strcpy_bus_test);
	return (launch_tests());
}
