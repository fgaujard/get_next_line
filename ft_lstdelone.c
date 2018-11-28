#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	(*del)((*alst)->content, (*alst)->content_size);
	(*alst)->content_size = 0;
	if (!(alst == &(*alst)))
		(*(alst - 1))->next = (*alst)->next;
	free(*alst);
	*alst = NULL;
}
