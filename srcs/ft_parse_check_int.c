static int	ft_skip_isspace(const char *str);
static int	ft_check_the_sign(const char *str, int *pos);
static unsigned int	ft_atoi_uint(const char *str);
static int  ft_strlen(const char *str);

/*
	Goal:	Check if string is int

	Why:	Because we will manipulate only integers

	How:	if the len of string is less than 10, then it is ok (we 
			checked for if it is integer in advance). If len == 0, 
			then use ft_atoi with uint and check if it is bigger or not

			The negative numbers were handled by creating a specific 
			cases
*/

int	ft_check_for_int(char *s)
{
	int	len;
	int	sign;

	sign = 0;
	if (s[0] == '-')
		sign = 1;
	len = (int)ft_strlen(s) - sign;
	if (len > 10)
		return (0);
	else if (len < 10)
		return (1);
	else
	{
		if (sign == 1 && ft_atoi_uint(s + 1) > 2147483648)
			return (0);
		else if (sign == 0 && ft_atoi_uint(s) > 2147483647)
			return (0);
		else
			return (1);
	}
}

static int	ft_skip_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n')
		{
			i++;
			continue ;
		}
		if (str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		{
			i++;
			continue ;
		}
		break ;
	}
	return (i);
}

static int	ft_check_the_sign(const char *str, int *pos)
{
	int	sign;

	if (!str[*pos])
		sign = 1;
	else if (str[*pos] == '-')
	{
		*pos = *pos + 1;
		sign = -1;
	}
	else if (str[*pos] == '+')
	{
		*pos = *pos + 1;
		sign = 1;
	}
	else
		sign = 1;
	return (sign);
}

static unsigned int	ft_atoi_uint(const char *str)
{
	unsigned int	returner;
	int		i;
	int		sign;

	i = ft_skip_isspace(str);
	sign = ft_check_the_sign(str, &i);
	returner = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		returner = returner * 10 + str[i] - 48;
		i++;
	}
	return (returner * sign);
}

static int  ft_strlen(const char *str)
{
    int size;

    size = 0;
    while (str && str[size])
        size++;
    return (size);
}