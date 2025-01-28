#include "libft.h"

void *ft_memmove(void *dest, void *src, size_t n)
{
    char  *dest_cpy;
    char  *src_cpy;
    size_t i;

    if(dest == NULL || src == NULL)
      return NULL;
    
    dest_cpy = dest;
    src_cpy = src;
    i = 0;

    if (dst_cpy > src_cpy)
    { 
      while (n-- > 0)
        dst_cpy[n] = src_cpy[n];
    }
    else
    {
      while (i < len)
      {
        dst_cpy[i] = src_cpy[i];
        i++;
      }
    }
    
    return (dest);
}
