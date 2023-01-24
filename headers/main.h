/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:32:40 by akalimol          #+#    #+#             */
/*   Updated: 2023/01/22 15:40:44 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include "ft_stack.h"

int		ft_init_stacks(t_stack **a, t_stack **b);
int		ft_parse(int argc, char **argv, t_stack *a, t_stack *b);
int		ft_part1_median(t_stack *a, t_stack *b);
int		ft_part2_cost(t_stack *a, t_stack *b);
int		ft_free_and_error(t_stack *a, t_stack *b);
void	ft_free_stacks(t_stack *a, t_stack *b);

#endif
