/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Ola 42!";
	char dest[20];

	ft_strncpy(dest, src, 12);
	printf("%s\n", dest);

	ft_strncpy(dest, src, 3);
	printf( "%s\n", dest);

	return (0);
}
*/
