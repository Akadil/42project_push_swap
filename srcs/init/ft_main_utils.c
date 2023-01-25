/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <akalimol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:25:00 by akalimol          #+#    #+#             */
/*   Updated: 2023/01/25 16:49:02 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include <stdlib.h>

int	ft_init_stacks(t_stack **a, t_stack **b)
{
	t_stack	*a_new;
	t_stack	*b_new;

	a_new = (t_stack *)malloc(sizeof(t_stack));
	if (!a_new)
		return (0);
	*a = a_new;
	b_new = (t_stack *)malloc(sizeof(t_stack));
	if (!b_new)
		return (0);
	*b = b_new;
	return (1);
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

int	ft_free_and_error(t_stack *a, t_stack *b)
{
	ft_free_stacks(a, b);
	return (0);
}
