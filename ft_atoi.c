int  ft_atoi(const char *nptr)
{
	int	res;
	int	sign;
	
	res = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * res);
}
