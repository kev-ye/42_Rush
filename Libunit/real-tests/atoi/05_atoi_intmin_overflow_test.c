/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_intmin_overflow_test.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:17:54 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:37:41 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	atoi_intmin_overflow_test(void)
{
	if ((long)ft_atoi("-2147483649") == -2147483649)
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}