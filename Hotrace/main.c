/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:16:38 by flohrel           #+#    #+#             */
/*   Updated: 2021/12/12 21:03:04 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

int	main(void)
{
	if (TRUE == get_data())
		run();
	clean();
	return (0);
}