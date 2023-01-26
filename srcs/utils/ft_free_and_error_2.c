#include "ft_stack.h"
#include <stdlib.h>

int			ft_free_2arraystr_error_0(char **trash);
int			ft_free_2arraystr_0(char **trash);
void		ft_free_2arraystr(char **trash);
int			ft_free_arrayint_error_0(int *trash);
static void	ft_error(void);

int	ft_free_2arraystr_error_0(char **trash)
{
	ft_error();
	return (ft_free_2arraystr_0(trash));
}

int	ft_free_2arraystr_0(char **trash)
{
	ft_free_2arraystr(trash);
	return (0);
}

void	ft_free_2arraystr(char **trash)
{
	int	i;

	i = 0;
	while (trash && trash[i])
		free(trash[i++]);
	free(trash);
}

int	ft_free_arrayint_error_0(int *trash)
{
	ft_error();
	free(trash);
	return (0);
}

static void	ft_error(void)
{
	write(1, "Error\n", 6);
}
