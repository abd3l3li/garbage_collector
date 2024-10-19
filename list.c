#include "header.h"

t_garbage 	*ft_lstnew_plus(void *content)
{
	t_garbage 	*new;

	new = (t_garbage  *)malloc(sizeof(t_garbage));
	if (!new)
		return (NULL);
	new->content = content;
	new->freed = 0;
	new->next = NULL;
	return (new);
}

void	ft_listadd_back_plus(t_garbage	**lst, t_garbage	*new)
{
	t_garbage	*temp;

	if (!new)
		return ;
	if (!(*lst))
	{
		(*lst) = new;
		return ;
	}
	temp = (*lst);
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
