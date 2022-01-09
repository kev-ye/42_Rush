/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strjoin_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:02:50 by maddi             #+#    #+#             */
/*   Updated: 2022/01/09 18:04:46 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strjoin_basic_test(void)
{
	if (ft_strjoin("aaa", "bbb") == "aaabbb")
		return (STATUS_SUCCESS);
	else 
		return (STATUS_FAILURE);
}