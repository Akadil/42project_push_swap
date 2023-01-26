#include "ft_stack.h"
#include <stdlib.h>

static void	ft_error(void);
void		ft_free_stacks(t_stack *a, t_stack *b);
int			ft_free_stacks_0(t_stack *a, t_stack *b);
int			ft_free_stacks_error_0(t_stack *a, t_stack *b);

int	ft_free_stacks_error_0(t_stack *a, t_stack *b)
{
	ft_error();
	return (ft_free_stacks_0(a, b));
}

int	ft_free_stacks_0(t_stack *a, t_stack *b)
{
	ft_free_stacks(a, b);
	return (0);
}

void	ft_free_stacks(t_stack *a, t_stack *b)
{
	if (a)
	{
		if (a->num)
			free(a->num);
		free(a);
	}
	if (b)
	{
		if (b->num)
			free(b->num);
		free(b);
	}
}

static void	ft_error(void)
{
	write(1, "Error\n", 6);
}
