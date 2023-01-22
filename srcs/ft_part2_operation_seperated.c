#include "../headers/ft_commands.h"

void    ft_operation_ra_rb(t_stack *a, t_stack *b, int cost_ra, int cost_rb)
{
    while (cost_ra != 0 && cost_rb != 0)
    {
        ft_commands_rr(a, b);
        cost_ra--;
        cost_rb--;
    }
    while (cost_ra != 0)
    {
        ft_commands_ra(a);
        cost_ra--;
    }
    while (cost_rb != 0)
    {
        ft_commands_rb(b);
        cost_rb--;
    }
    ft_commands_pa(a, b);
}

void    ft_operation_ra_rrb(t_stack *a, t_stack *b, int cost_ra, int cost_rrb)
{
    while (cost_ra != 0)
    {
        ft_commands_ra(a);
        cost_ra--;
    }
    while (cost_rrb != 0)
    {
        ft_commands_rrb(b);
        cost_rrb--;
    }
    ft_commands_pa(a, b);
}

void    ft_operation_rra_rb(t_stack *a, t_stack *b, int cost_rra, int cost_rb)
{
    while (cost_rra != 0)
    {
        ft_commands_rra(a);
        cost_rra--;
    }
    while (cost_rb != 0)
    {
        ft_commands_rb(b);
        cost_rb--;
    }
    ft_commands_pa(a, b);
}

void    ft_operation_rra_rrb(t_stack *a, t_stack *b, int cost_rra, int cost_rrb)
{
    while (cost_rra != 0 && cost_rrb != 0)
    {
        ft_commands_rrr(a, b);
        cost_rra--;
        cost_rrb--;
    }
    while (cost_rra != 0)
    {
        ft_commands_rra(a);
        cost_rra--;
    }
    while (cost_rrb != 0)
    {
        ft_commands_rrb(b);
        cost_rrb--;
    }
    ft_commands_pa(a, b);
}