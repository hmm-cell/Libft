char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_find;

	if (*little == '\0')
		return (big);
	len_find = ft_strlen(to_find);
	while (*big != '\0' && len >= len_find)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, len_find) == 0)
				return (big);
		}
		big++;
		len--;
	}
	return (0);
}
