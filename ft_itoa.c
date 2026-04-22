int	num_size(int n)
{
	int	size;
	long	nbr;
	
	nbr = n;
	size = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		size++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char  *ft_itoa(int n)
{
	int	len;
	long	nbr;
	char	*s;
	
	nbr = n;
	len = num_size(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		s[0] = '0';
	s[len--] = '\0';
	while (nbr > 0) {
		s[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}
