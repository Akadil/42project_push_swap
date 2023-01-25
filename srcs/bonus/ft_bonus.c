#include "ft_bonus.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char *str;
	int	fd;

	fd = open("../../pseudocodes/bonus_test.txt", O_RDONLY);
	a = NULL;
	b = NULL;
	if (ft_init_stacks(&a, &b) == 0)
		return (ft_free_and_error(a, b));
	if (ft_parse(argc, argv, a, b) == 0)
		return (ft_free_and_error(a, b));
	str = get_next_line(fd);
	while (str)
	{
		ft_do_command(a, b, str);
		if (!a)
			return (0);
		str = get_next_line(fd);
	}
	if (ft_is_sorted(a) == 1 && ft_is_empty(b) == 1)
		write(1, "Ok\n", 3);
	else
		write(1, "Ko\n", 3);
	ft_free_stacks(a, b);
	return (0);
}