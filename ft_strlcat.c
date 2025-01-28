#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
  size_t dest_len;
  size_t src_len;
  size_t i;

  dest_len = 0;
  while(dest[dest_len])
    dest_len++;
  src_len = 0;
  while(src[src_len])
    src_len++;

  if(dest_size <= dest_len)
    return src_len + dest_size;

  i = 0;
  while(src[i] && (dest_len + i + 1) < dest_size)
  {
    dest[dest_len + i] = src[i];
    i++;
  }
  dest[dest_len + 1] = '\0';
  return dest_len + src_len;
}
