#ifndef FT_OPERATIONS_H
# define FT_OPERATIONS_H

# include "ft_stack.h"

void    ft_operation_ra_rb(t_stack *a, t_stack *b, int cost_ra, int cost_rb);
void    ft_operation_ra_rrb(t_stack *a, t_stack *b, int cost_ra, int cost_rrb);
void    ft_operation_rra_rb(t_stack *a, t_stack *b, int cost_rra, int cost_rb);
void    ft_operation_rra_rrb(t_stack *a, t_stack *b, int cost_rra, int cost_rrb);

#endif