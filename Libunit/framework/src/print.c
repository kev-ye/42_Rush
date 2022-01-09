/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:36:38 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 16:13:10 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	print_result(void)
{
	t_unit	*ptr;
	int		total;
	int		suc;

	ptr = unit_singleton(FALSE);
	unit_putendl_fd("", STDOUT_FILENO);
	suc = ptr->info.result_success;
	total = ptr->info.result_success + ptr->info.result_failure;
	unit_putnbr_fd(suc, STDOUT_FILENO);
	unit_putstr_fd(" / ", STDOUT_FILENO);
	unit_putnbr_fd(total, STDOUT_FILENO);
	unit_putendl_fd(" tests checked", STDOUT_FILENO);
}