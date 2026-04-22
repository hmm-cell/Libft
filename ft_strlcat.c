size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	while (*dst &&  0 < size)
	{
		dst++;
		size--;
	}
	while (*src && 1 < size)
	{
		*dst++ = *src++;
		size--;
	}
	if (size > 0)
        	*dst = '\0';
	return (dst_size + src_size);
}
