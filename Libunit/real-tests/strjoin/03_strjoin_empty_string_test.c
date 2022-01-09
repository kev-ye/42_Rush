/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strjoin_empty_string_test.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:32:47 by maddi             #+#    #+#             */
/*   Updated: 2022/01/09 18:33:36 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strjoin_empty_string_test(void)
{
	if (ft_strjoin("", "a") == "a"
		&& ft_strjoin("a", "") == "a")
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}