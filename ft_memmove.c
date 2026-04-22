void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *p;
	
	p = (unsigned char *)dest;
	if (!src && !dest)
		return (NULL);
	if (*dest > *src)
	{
		while (n--)
			*dest++ = *src++;
	}
	if (*dest < *src)
	{
		while (n--)
			dest[n] = src[n];
	}
	return (p);
}
