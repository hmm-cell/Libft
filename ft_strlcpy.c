size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);
}
