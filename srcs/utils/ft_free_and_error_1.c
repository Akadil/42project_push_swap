/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_and_error_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <akalimol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:23:45 by akalimol          #+#    #+#             */
/*   Updated: 2023/01/26 15:45:50 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include <stdlib.h>
#include <unistd.h>

static void	ft_error(void);
void		ft_free_stacks(t_stack *a, t_stack *b);
int			ft_free_stacks_0(t_stack *a, t_stack *b);
int			ft_free_stacks_error_0(t_stack *a, t_stack *b);
int			ft_free_str_0(char *str);

int	ft_free_stacks_error_0(t_stack *a, t_stack *b)
{
	ft_error();
	return (ft_free_stacks_0(a, b));
}

int	ft_free_stacks_0(t_stack *a, t_stack *b)
{
	ft_free_stacks(a, b);
	return (0);
}

void	ft_free_stacks(t_stack *a, t_stack *b)
{
	if (a)
	{
		if (a->num)
			free(a->num);
		free(a);
	}
	if (b)
	{
		if (b->num)
			free(b->num);
		free(b);
	}
}

int	ft_free_str_0(char *str)
{
	if (str)
		free(str);
	return (0);
}

static void	ft_error(void)
{
	write(1, "Error\n", 6);
}