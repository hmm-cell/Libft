char *ft_strdup(const char *s)
{
	char	*new_s;
	char	*ptr;

	new_s = (char *)malloc(ft_strlen(s) + 1);
	if (!new_s)
		return (0);
	ptr = new_s;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (new_s);
}
