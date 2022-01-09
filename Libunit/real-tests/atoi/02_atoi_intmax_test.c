/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_intmax_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:16:53 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 20:43:01 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	atoi_intmax_test(void)
{
	if (atoi("2147483647") == 2147483647)
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}