/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:09:02 by kaye              #+#    #+#             */
/*   Updated: 2022/01/08 23:23:12 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

typedef struct s_info
{
	int		status;
	char	*status_msg;
}	t_info;

static const t_info	g_info[STATUS_MAX] = {
	{STATUS_OK, "OK"},
	{STATUS_KO, "KO"},
	{STATUS_SIGSEGV, "SIGSEGV"},
	{STATUS_SIGBUS, "SIGBUS"}
};

static void	handle_info(int status)
{
	t_unit	*ptr;
	int	i;

	i = 0;
	ptr = unit_singleton();
	while (i < STATUS_MAX)
	{
		if (g_info[i].status == status)
		{
			if (status == STATUS_OK)
				++ptr->info.result_success;
			else
				++ptr->info.result_failure;
			unit_putendl_fd(g_info[i].status_msg, STDOUT_FILENO);
			return ;
		}
		++i;
	}
}

static void	handle_status(int status)
{
	if (WIFEXITED(status) != FALSE)
	{
		if (WEXITSTATUS(status) == 0)
			handle_info(STATUS_OK);
		else
			handle_info(STATUS_KO);
	}
	if (WIFSIGNALED(status) == TRUE)
	{
		if (WTERMSIG(status) == SIGSEGV)
			handle_info(STATUS_SIGSEGV);
		else if (WTERMSIG(status) == SIGBUS)
			handle_info(STATUS_SIGBUS);
	}
}

static void	fork_test(t_test *curr_test)
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid < 0)
		exit(STATUS_FAILURE);
	if (pid == 0)
		exit(curr_test->func());
	else
		wait(&status);
	handle_status(status);
}

static void	print_info(t_test *curr_test)
{
	unit_putstr_fd(curr_test->func_name, STDOUT_FILENO);
	unit_putstr_fd(": ", STDOUT_FILENO);
	unit_putstr_fd(curr_test->test_name, STDOUT_FILENO);
	unit_putstr_fd(": ", STDOUT_FILENO);
}

int	launch_tests(void)
{
	t_unit	*ptr;
	t_test	*tmp;
	int		ret;

	ptr = unit_singleton();
	tmp = ptr->test;
	while (tmp)
	{
		print_info(tmp);
		fork_test(tmp);
		exit(1);
		tmp = tmp->next;
	}
	if (ptr->info.result_failure > 0)
		ret = STATUS_SUCCESS;
	else
		ret = STATUS_FAILURE;
	unit_clean();
	return (ret);
}