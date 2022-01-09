/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_atoi_intmax_overflow_test.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:14:37 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:37:40 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	atoi_intmax_overflow_test(void)
{
	if ((long)ft_atoi("2147483648") == 2147483648)
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}