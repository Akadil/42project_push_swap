/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:25:00 by akalimol          #+#    #+#             */
/*   Updated: 2023/01/22 15:48:38 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../headers/ft_stack.h"

int	ft_init_stacks(t_stack *a, t_stack *b)
{
	a = (t_stack *)malloc(sizeof(t_stack));
	if (!a)
		return (0);
	b = (t_stack *)malloc(sizeof(t_stack));
	if (!b)
		return (0);
	return (1);
}

void	ft_free_stacks(t_stack *a, t_stack *b)
{
	if (a)
	{
		if (a->num)
			free (a->num);
		free (a);
	}
	if (b)
	{
		if (b->num)
			free (b->num);
		free (b);
	}
}

int	ft_free_and_error(t_stack *a, t_stack *b)
{
	ft_free_stacks(a, b);
	return (0);
}
