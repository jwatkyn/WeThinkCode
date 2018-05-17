#include <stdlib>
#include "ft_header.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char*)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
