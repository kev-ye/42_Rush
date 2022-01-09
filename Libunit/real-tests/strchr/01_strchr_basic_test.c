/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strchr_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:19:24 by maddi             #+#    #+#             */
/*   Updated: 2022/01/09 18:22:20 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strchr_basic_test(void)
{
	char	*str;
	str = "aaabaab";
	if (ft_strchr(str, 'b') == str + 4)
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}