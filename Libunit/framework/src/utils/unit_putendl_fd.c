/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:35:05 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 21:00:27 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	unit_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	unit_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
