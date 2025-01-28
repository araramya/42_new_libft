#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
  unsigned char *s_cpy;
  unsigned char c;
  size_t i;

  s_cpy = (unsigned char *)s;
  c_cpy = (unsigned char)c;

  i = 0;
  while(i < n)
  {
    if(s_cpy[i] == c_cpy)
      return (void*)(s_cpy + i);
    i++;
  }
  return NULL;

}
