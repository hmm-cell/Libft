char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	i = 0;
	new_s = (char *)malloc(len + 1);
	if (!new_s)
		return (0);
	ptr = new_s;
	while (s[start] != '\0' && i < len)
	{
		*new_s++ = s[start++];
		i++;
	}
	*new_s = '\0';
	return (ptr);
}
