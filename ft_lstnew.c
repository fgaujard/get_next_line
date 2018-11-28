#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(*new))))
		return (NULL);
	new->content_size = content_size;
	new->next = NULL;
	if (content)
	{
		if (!(new->content = malloc(content_size)))
			return (NULL);
		new->content = ft_memmove(new->content, content, content_size);
	}
	else
	{
		new->content_size = 0;
		new->content = NULL;
	}
	return (new);
}
