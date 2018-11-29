#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dest;
	size_t		sr;

	i = 0;
	dest = ft_strlen(dst);
	sr = ft_strlen(src);
	if (size - 1 <= dest)
		return (sr + size);
	while (dest + i < size - 1)
	{
		dst[dest + i] = src[i];
		i++;
	}
	dst[dest + i] = '\0';
	return (dest + sr);
}
