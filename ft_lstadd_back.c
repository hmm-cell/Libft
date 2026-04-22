void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	
	last = *lst;
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (last)
		last = last->next;
	last->next = new;
	new->next = NULL;
}
