/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:00:46 by maddi             #+#    #+#             */
/*   Updated: 2022/01/09 20:30:10 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <fcntl.h>

int	log_open()
{
	int	fd;

	fd = open("/Users/maddi/Documents/42_Rush/Libunit/real-tests/tests.log", O_CREAT | O_RDWR | S_IRWXU, 0666);
	return (fd);
}

void	log_info(t_test *curr_test)
{
	int	fd;

	fd = log_open();
	unit_putstr_fd(curr_test->func_name, fd);
	unit_putstr_fd(": ", fd);
	unit_putstr_fd(curr_test->test_name, fd);
	unit_putstr_fd(": ", fd);
	//close(fd);
}