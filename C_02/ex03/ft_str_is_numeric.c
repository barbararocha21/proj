#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int num;

	num = 0;
	if (str[0] == '\0')
		return (0);
	while (str[num] != '\0')
	{
		if (str[num] < '0' || str[num] > '9')
			return (0);
		num++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("12345"));
	printf("%d\n", ft_str_is_numeric("42Rio"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("0000"));
	return (0);
}

