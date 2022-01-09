/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strjoin_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:02:50 by maddi             #+#    #+#             */
/*   Updated: 2022/01/09 19:23:59 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	strjoin_basic_test(void)
{
	if (ft_strcmp(ft_strjoin("aaa", "bbb"), "aaabbb") == 0)
		return (STATUS_SUCCESS);
	else 
		return (STATUS_FAILURE);
}