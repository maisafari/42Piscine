
#include "libft.h"

int main () 
{
	char *str;
	char *ptr;

	if (!(str = (char *)malloc(sizeof(char)* 50)))
	{
		printf("%s", "erro mem str");
		return(-1);
	}
	if (!(ptr = (char *)malloc(sizeof(char)* 50)))
	{
		printf("%s", "erro mem ptr");
		return(-2);
	}
	strcpy(str,"This is string.h library function");
	puts(str);

//	memset(str,'$',3);
 //	printf("%s\n", str);

   //ft_memset(str,'$',3);
  // ptr = &(str[3]);
   //ft_bzero(ptr, 4);
  /* strcpy(ptr,"THIS IS PTR");
   printf("%s\n", ptr);
   printf("%lu\n",  ft_strlcat(ptr, str, 50));
   printf("%lu\n", strlen(ptr));
   */
 //printf("%s\n", ft_strchr(str, 0));
//printf("%s\n", ft_strrchr(str, 0));
   return(0);
}