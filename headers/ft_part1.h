#ifndef FT_PART1_H
# define FT_PART1_H

# include "ft_commands.h"
# include "ft_stack.h"
# include <stdlib.h>

int ft_find_median(t_stack *a);
void    ft_sort_a(t_stack *a);
void	ft_quicksort(int *array, int l_pos, int r_pos);

#endif