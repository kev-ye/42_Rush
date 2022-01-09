/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:17:05 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 17:19:20 by kaye             ###   ########.fr       */
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
	status |= atoi_launcher();
	return (status);
}