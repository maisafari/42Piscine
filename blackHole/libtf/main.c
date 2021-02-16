
#include "libft.h"


int main (void) 
{
   char *str;
   char *ptr;

 

	if (!(str = (char *)malloc(50 * sizeof(char))))
	{
		printf("%s", "ERRO MEMORIA MAIN");
		return(-1);
	}
	
	if (!(ptr= (char *)malloc( 50 * sizeof(char))))
   {
	   printf("%s", "ERRO MEMORIA MAIN");
	   return(-1);
   }
   strcpy(str,"This is string.h library function");
   puts(str);

	//printf("%s\n", ptr);
//	memset(str,'$',3);
	//ptr = memcpy(ptr, str,9);
	//ptr = memccpy(ptr, str, 'A' , 9);
 //	printf("%s\n", str);
 	

   //ft_memset(str,'$',3);
   //ptr = &(str[3]);
   //ft_bzero(ptr, 4);

	//ptr = (char *) ft_memcpy(ptr, str,9);
	/*ptr = ft_memccpy(ptr, str, 'y' , 50);
	if (ptr == NULL)
	{ 
	    printf("%s\n", "Nao foi encontrada a letra");
	}
	else 
		printf("%s\n", ptr);*/
	/*ptr = ft_memmove(ptr, str, 50);
	if (ptr == NULL)
	{ 
	    printf("%s\n", "Nao foi deu");
	}
	else 
		printf("%s\n", ptr);*/
	/*ptr= ft_memchr(str, 'y', 50);
		   printf(" %s\n", ptr);*/

	/*strcpy(ptr,"This is string.h library function");
	printf("%s\n", ptr);
	printf("%d", ft_memcmp(str, ptr, 50));*/
	
	//printf("%ld", ft_strlen(str));
	//printf("%ld", ft_strlcpy(ptr, str, 9));
	  /* strcpy(ptr,"THIS IS PTR");
   printf("%s\n", ptr);
   printf("%lu\n",  ft_strlcat(ptr, str, 50));
   printf("%lu\n", strlen(ptr));
   */
 //printf("%s\n", ft_strchr(str, 0));
//printf("%s\n", ft_strrchr(str, 0));
	free(str);
	

   return(0);
}
