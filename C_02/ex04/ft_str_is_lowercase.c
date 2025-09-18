#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int letter;

	letter = 0;
        while (str[letter] != '\0')
        {
                if (str[letter] < 'a' || str[letter] >= 'z')
                        return (0);

                letter++;
        }
        return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("abc"));
	printf("%d\n", ft_str_is_lowercase("ABC"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
