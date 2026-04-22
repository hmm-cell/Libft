void  *ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	total;
	if (!nmeb || !size)
		return (NULL);
	if (nmeb * size > INT_MAX)
		return (NULL);
	total = nmeb * size;
	buf = malloc(total);
	if (!s)
		return (NULL);
	ft_memset(s, 0, total);
	return (s);
}
