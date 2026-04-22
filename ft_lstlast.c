t_list  *ft_lstlast(t_list *lst)
{
	int	size;
	t_list	*last;
	
	if (!lst)
		return (NULL);
	size = ft_lstsize(lst) - 1;
	while (size--)
		lst = lst->next;
	last = lst;
	return (last);	
}
