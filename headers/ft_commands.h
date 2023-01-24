#ifndef FT_COMMANDS_H
# define FT_COMMANDS_H

# include "ft_stack.h"

void    ft_commands_pa(t_stack *a, t_stack *b);
void    ft_commands_pb(t_stack *a, t_stack *b);
void    ft_commands_sa(t_stack *a);
void    ft_commands_sb(t_stack *b);
void    ft_commands_ss(t_stack *a, t_stack *b);
void    ft_commands_ra(t_stack *a);
void    ft_commands_rb(t_stack *b);
void    ft_commands_rr(t_stack *a, t_stack *b);
void    ft_commands_rra(t_stack *a);
void    ft_commands_rrb(t_stack *b);
void    ft_commands_rrr(t_stack *a, t_stack *b);

#endif