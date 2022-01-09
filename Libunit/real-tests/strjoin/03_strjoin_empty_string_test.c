/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strjoin_empty_string_test.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:32:47 by maddi             #+#    #+#             */
/*   Updated: 2022/01/09 19:25:42 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strjoin_empty_string_test(void)
{
	if (ft_strcmp(ft_strjoin("", "a"), "a") == 0
		&& ft_strcmp(ft_strjoin("a", ""), "a") == 0)
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}