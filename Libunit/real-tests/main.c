/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddi <maddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:17:05 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 18:27:19 by maddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

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