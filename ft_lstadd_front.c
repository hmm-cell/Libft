void  ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;
	
	tmp = *lst;
	if (!new || !lst)
		return ;
	*lst = new;
	new->next = tmp;
}
