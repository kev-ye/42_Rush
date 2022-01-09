/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_toupper_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:46:39 by maddi             #+#    #+#             */
/*   Updated: 2022/01/09 17:49:41 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	toupper_basic_test(void)
{
	if (ft_toupper('a') == 'A')
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}