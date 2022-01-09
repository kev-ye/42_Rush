/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcpy_bus_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:47:58 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:13:59 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strcpy_bus_test(void)
{
	char		*buffer1;
	char		*buffer2;
	char		*cpy;

	buffer1 = "";
	buffer2 = "hello";
	cpy = ft_strcpy(buffer1, buffer2);
	if (ft_strcmp(cpy, "hello") == 0)
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}