/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:50:09 by kaye              #+#    #+#             */
/*   Updated: 2022/01/08 21:57:49 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFS_H
# define DEFS_H

/**
 * @brief anscii code
 */
# define ANSCII_CLEAR "\033[0m"
# define ANSCII_BLACK "\033[1;30m"
# define ANSCII_RED "\033[1;31m"
# define ANSCII_GREEN "\033[1;32m"
# define ANSCII_YELLOW "\033[1;33m"
# define ANSCII_BLUE "\033[1;34m"
# define ANSCII_PURPLE "\033[1;35m"
# define ANSCII_CYAN "\033[1;36m"

/**
 * @brief boolean define
 */
# define BOOL unsigned int
# define TRUE 1
# define FALSE 0

/**
 * @brief TEST STATUS
 */
# define STATUS_SUCCESS 0
# define STATUS_FAILURE -1

/**
 * @brief syscall error
 */
# define SYSCALL_ERROR -1

/**
 * @brief STATUS
 */
# define STATUS_MAX 4
# define STATUS_OK 1
# define STATUS_KO 2
# define STATUS_SIGSEGV 3
# define STATUS_SIGBUS 4

/**
 * @brief includes
 */
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#endif