/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_clean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:03:33 by kaye              #+#    #+#             */
/*   Updated: 2022/01/08 22:20:30 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	unit_clean(void)
{
	t_unit	*ptr;

	ptr = unit_singleton();
	if (ptr)
	{
		clean_tests();
		free(ptr);
		ptr = NULL;
	}
}