void  *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char chr;
	
	chr = (unsigned char)c;		
	while (n--)
	{
		if (*s = chr)
			return (s);
		s++;
	}
	return (NULL);
}
