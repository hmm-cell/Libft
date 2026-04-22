#include <stdlib.h>
#include <stdio.h>

char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

int	sub_strs_handler(const char *str, char c, char **res)
{
	int	str_ctr;
	int	size;
	
	str_ctr = 0;
	size = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			str_ctr++;
			size = 0;
			while (*str && *str != c)
			{
				str++;
				size++;
			}
			if (res)
				return (size);
		}
	}
	return (str_ctr);
}

char  **ft_split(char const *s, char c)
{
	char	**res;
	int	i;
	int	j;
	int	len;
	
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = 0;
	res = malloc(sizeof(char *) * (sub_strs_handler(s, c, NULL) + 1));
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len = sub_strs_handler(&s[i], c, res);
			res[j] = ft_substr(s, i, len);
			if (!res[j++])
				return (ft_free(res, j));
			i += len;
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}
/*
int	main(void)
{
	char	*str = "  Olá,como,tudo,,,,bem co,tingo  ";
	char	c = ',';
	char	**result;
	int		i;

	i = 0;
	result = ft_split(str, c);
	if (!result)
		return (1);
	printf("String original: [%s]\n", str);
	printf("Seps:     [%c]\n\n", c);
	while (result[i])
	{
		printf("Substring %d: [%s]\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
