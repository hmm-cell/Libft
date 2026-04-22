void  *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p;

	p = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*dest++ = *src++;
	return (p);
}
