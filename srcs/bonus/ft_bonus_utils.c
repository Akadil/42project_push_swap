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
		ft_free_and_error(a, b);
}

int	ft_is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size)
	{
		if (a->num[i] <= a->num[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_empty(t_stack *b)
{
	if (b->size == 0)
		return (1);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	return (0);
}