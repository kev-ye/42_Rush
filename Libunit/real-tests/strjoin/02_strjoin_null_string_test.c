/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strjoin_null_string_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:05:46 by maddi             #+#    #+#             */
/*   Updated: 2022/01/09 18:08:09 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strjoin_null_string_test(void)
{
	if (ft_strjoin(NULL, "a") == NULL
		&& ft_strjoin("a", NULL) == NULL)
		return (STATUS_SUCCESS);
	else
		return (STATUS_FAILURE);
}