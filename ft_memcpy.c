#include "libft.h"

void *ft_memcpy(void *dest, void *src, size_t n)
{
  char* dest_cpy;
  char* src_cpy;
  size_t i;

  if(dest == NULL || src == NULL)
  {
    return NULL;
  }
  
  dest_cpy = dest;
  src_cpy = src;
  i = 0;
  while(i < n)
  {
    dest_cpy[i] = src_cpy[i];
  }

  return (dest);
}
