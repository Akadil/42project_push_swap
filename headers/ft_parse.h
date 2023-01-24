/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <akalimol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:45:02 by akalimol          #+#    #+#             */
/*   Updated: 2023/01/24 15:45:03 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_H
# define FT_PARSE_H

# include "../libft/libft.h"
# include "ft_stack.h"
# include <stdlib.h>

int		ft_create_b(int size, t_stack *b);
int		ft_check_normal(char **argv, int isString);
int		ft_check_for_int(char *s);
int		ft_check_for_duplicates(int num, int *con, int ind);
int		ft_free_and_return_0(int *trash);
void	ft_free_double_array(char **trash);
int		ft_free_return0(int *trash);
int		ft_find_n_word(char const *s, char c);

#endif
