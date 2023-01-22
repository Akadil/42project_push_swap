#include <stdlib.h>
#include <unistd.h>

static void	ft_error(void);

int	ft_check_for_duplicates(int num, int *con, int ind)
{
	int	i;

	i = 0;
	while (i < ind)
	{
		if (con[i] == num)
			return (0);
		i++;
	}
	return (1);
}

void	ft_free_doubleArray(char **trash)
{
	int	i;

	i = 0;
	while (trash && trash[i])
		free (trash[i++]);
	free (trash);
}

int	ft_free_return0(int *trash)
{
	ft_error();
	free (trash);
	return (0);
}

int	ft_find_n_word(char const *s, char c)
{
	int	i;
	int	n;
	int	checker;

	n = 0;
	i = 0;
	checker = 1;
	while (s[i])
	{
		if (s[i] != c && checker == 1)
		{
			checker = 0;
			n++;
		}
		else if (s[i] == c && checker == 0)
		{
			checker = 1;
		}
		i++;
	}
	return (n);
}

static void	ft_error(void)
{
	write(1, "Error!", 6);
}
