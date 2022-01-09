/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_basic_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:16:07 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:37:36 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	atoi_basic_test(void)
{
	if (ft_atoi("42") == 42)
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}