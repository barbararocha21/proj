#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] < 'A' || str[letter] > 'Z')
			return (0);
	letter++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("abc"));
	printf("%d\n", ft_str_is_uppercase("ABC"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}
