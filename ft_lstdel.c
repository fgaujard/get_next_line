#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t len))
{
	t_list *next;

	if (!alst || !(*alst) || !del)
		return ;
	while ((*alst)->next != NULL)
	{
		next = (*alst)->next;
		ft_lstdelone(&(*alst), del);
		*alst = next;
	}
	ft_lstdelone(&(*alst), del);
	alst = NULL;
}
