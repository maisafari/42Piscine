
#include "libft.h"

int main () 
{
   char str[50];
   char *ptr;

   strcpy(str,"This is string.h library function");
   puts(str);

//	memset(str,'$',3);
 //	printf("%s\n", str);

   ft_memset(str,'$',3);
   ptr = &(str[3]);
   ft_bzero(ptr, 4);

    printf("%s\n", str);
   
   return(0);
}