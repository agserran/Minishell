/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:01:57 by psegura-          #+#    #+#             */
/*   Updated: 2023/05/24 14:30:54 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_print_env(char **matrix)
{
	int	i;

	i = -1;
	while (matrix[++i])
		printf("%s\n", matrix[i]);
}

int	ft_env(char **env)
{
	ft_sort_matrix(env);
	ft_print_env(env);
	if (g_c.tok_count > 1)
		exit(EXIT_SUCCESS);
	return (EXIT_SUCCESS);
}
