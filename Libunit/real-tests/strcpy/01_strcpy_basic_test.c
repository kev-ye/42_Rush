/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcpy_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:52:26 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:13:54 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strcpy_basic_test(void)
{
	char		buffer[6];
	char		*cpy;

	cpy = ft_strcpy(buffer, "hello");
	if (ft_strcmp(cpy, "hello") == 0)
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}
