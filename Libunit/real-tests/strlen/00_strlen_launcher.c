/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:15:47 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:14:27 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strlen_launcher(void)
{
	load_test("strlen", "basic test", &strlen_basic_test);
	load_test("strlen", "null test", &strlen_null_test);
	return (launch_tests());
}
