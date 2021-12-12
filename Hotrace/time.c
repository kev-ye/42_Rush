/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flohrel <flohrel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:17:48 by flohrel           #+#    #+#             */
/*   Updated: 2021/12/11 16:31:43 by flohrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

/*
 **		Function to call right before execution
 */
void	chrono_start(t_chrono *this)
{
	this->start = clock();
	this->count++;
}

/*
 **		Function to call right after execution
 */
void	chrono_end(t_chrono *this)
{
	this->end = clock();
	this->total_time += ((float)((this->end
					- this->start) * 1000) / CLOCKS_PER_SEC);
}

/*
 **		Display execution time for every function listed
 */
void	chrono_display(t_chrono *this)
{
	this->avg_time = this->total_time / this->count;
	printf("%.3f ms\n", this->avg_time);
}

/*
 **		Reset every time-related parameter in chrono struct
 */
void	chrono_reset(t_chrono *this)
{
	this->start = 0;
	this->end = 0;
	this->avg_time = 0;
	this->total_time = 0;
	this->count = 0;
}
