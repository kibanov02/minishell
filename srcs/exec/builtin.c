/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakenya <mlakenya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 04:57:36 by mlakenya          #+#    #+#             */
/*   Updated: 2022/11/21 11:37:35 by mlakenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int		is_builtin(char *command)
{
	if (ft_strncmp(command, "echo", ft_strlen(command)) == 0)
		return (1);
	if (ft_strncmp(command, "cd", ft_strlen(command)) == 0)
		return (1);
	if (ft_strncmp(command, "pwd", ft_strlen(command)) == 0)
		return (1);
	if (ft_strncmp(command, "env", ft_strlen(command)) == 0)
		return (1);
	if (ft_strncmp(command, "export", ft_strlen(command)) == 0)
		return (1);
	if (ft_strncmp(command, "unset", ft_strlen(command)) == 0)
		return (1);
	return (0);
}

int		exec_builtin(char **args, t_mini *mini)
{
	int		result;

	result = 0;
	if (ft_strncmp(args[0], "echo", 4) == 0)
		result = ft_echo(args);
	if (ft_strncmp(args[0], "cd", 2) == 0)
		result = ft_cd(args, mini);
	if (ft_strncmp(args[0], "pwd", 3) == 0)
		result = ft_pwd();
	if (ft_strncmp(args[0], "env", 3) == 0)
		ft_env(mini->env);
	if (ft_strncmp(args[0], "export", 6) == 0)
		ft_export(args, mini->env, mini);
	if (ft_strncmp(args[0], "unset", 5) == 0)
		ft_unset(args, mini);
	return (result);
}