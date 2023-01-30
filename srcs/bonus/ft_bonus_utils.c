/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <akalimol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:24:16 by akalimol          #+#    #+#             */
/*   Updated: 2023/01/30 19:05:49 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bonus.h"

void	ft_do_command(t_stack *a, t_stack *b, char *str)
{
	if (ft_strcmp(str, "pa\n") == 1)
		ft_commands_pa(a, b, 0);
	else if (ft_strcmp(str, "pb\n") == 1)
		ft_commands_pb(a, b, 0);
	else if (ft_strcmp(str, "sa\n") == 1)
		ft_commands_sa(a, 0);
	else if (ft_strcmp(str, "sb\n") == 1)
		ft_commands_sb(b, 0);
	else if (ft_strcmp(str, "ss\n") == 1)
		ft_commands_ss(a, b, 0);
	else if (ft_strcmp(str, "ra\n") == 1)
		ft_commands_ra(a, 0);
	else if (ft_strcmp(str, "rb\n") == 1)
		ft_commands_rb(b, 0);
	else if (ft_strcmp(str, "rr\n") == 1)
		ft_commands_rr(a, b, 0);
	else if (ft_strcmp(str, "rra\n") == 1)
		ft_commands_rra(a, 0);
	else if (ft_strcmp(str, "rrb\n") == 1)
		ft_commands_rrb(b, 0);
	else if (ft_strcmp(str, "rrr\n") == 1)
		ft_commands_rrr(a, b, 0);
	else
		ft_free_stacks(a, b);
}

int	ft_is_empty(t_stack *b)
{
	if (b->size == 0)
		return (1);
	return (0);
}

int	ft_result_free_return(t_stack *a, t_stack *b, int res)
{
	if (res == 1)
		write (1, "Ok\n", 3);
	else
		write (1, "Ko\n", 3);
	return (ft_free_stacks_0(a, b));
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	return (0);
}
