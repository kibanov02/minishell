/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakenya <mlakenya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:59:43 by mlakenya          #+#    #+#             */
/*   Updated: 2022/11/08 19:20:32 by mlakenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	sigint(int code)
{
	(void)code;
	write(1, "\nsigint\n", 8);
	return ;
}

void	sigquit(int code)
{
	(void)code;
	write(1, "\nsigquit\n", 9);
	return ;
}
