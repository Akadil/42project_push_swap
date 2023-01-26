/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:41:39 by akalimol          #+#    #+#             */
/*   Updated: 2023/01/26 16:41:41 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BONUS_H
# define FT_BONUS_H

# include "ft_commands.h"
# include "ft_stack.h"
# include "ft_free_and_error.h"
# include "get_next_line.h"
# include "main.h"
# include <unistd.h>

void	ft_do_command(t_stack *a, t_stack *b, char *str);
int		ft_is_sorted(t_stack *a);
int		ft_is_empty(t_stack *b);
int		ft_strcmp(char *s1, char *s2);

#endif
