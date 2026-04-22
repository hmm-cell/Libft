char  *ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*p;
	
	if (!s1 || !s2)
		return (NULL);
	s = (char *)malloc(ft_strlen(s1) +  ft_strlen(s2) + 1);
	if (!s)
		return (NULL);
	p = s;
	while(*s1)
		*s++ = *s1++;
	while(*s2)
		*s++ = *s2++;
	*s = '\0';
	return (p);
}
