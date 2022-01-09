/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:17:05 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:19:37 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int main(void)
{
	int status;
	
	status = 0;
	status |= strlen_launcher();
	status |= strcpy_launcher();
	status |= strcmp_launcher();
	status |= strjoin_launcher();
	status |= strchr_launcher();
	status |= atoi_launcher();
	status |= toupper_launcher();

	return (status);
}