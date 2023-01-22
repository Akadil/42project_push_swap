#ifndef FT_PART2_H
# define FT_PART2_H

# include "ft_stack.h"
# include <stdlib.h>

int ft_find_cost(t_stack *a, t_stack *b, int ind);
void    ft_operate_with_cost(t_stack *a, t_stack *b, int ind);
void    ft_stabilizer(t_stack *a);

#endif