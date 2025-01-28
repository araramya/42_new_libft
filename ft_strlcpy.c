#include "libft.h"

size_t strlcpy (char *dest, const char* src, size_t dest_size)
{
  size_t src_len;
  size_t i;

  if (!dest || !src)
    return (0);
  src_len = 0;
  while (src[i])
		src_len++;
	if (dest_size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < dest_size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);

}
