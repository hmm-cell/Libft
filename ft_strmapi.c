char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*n_s;
	char	*p;
	unsigned int	len;
	
	len = ft_strlen(s);
	i = 0;
	n_s = malloc(sizeof (char ) * (len + 1));
	if (!n_s)
		return (NULL);
	while (i < len)
	{
		n_s[i] = (*f)(i, s[i]);
		i++;
	}
	n_s[i] = '\0';
	return (n_s);
}
