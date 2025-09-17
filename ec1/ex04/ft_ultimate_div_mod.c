/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocha-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:11:49 by brocha-b          #+#    #+#             */
/*   Updated: 2025/09/17 16:27:14 by brocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	if (b != 0 && *b != 0)
	{
		temp_a = *a;
		temp_b = *b;
		*a = temp_a / temp_b;
		*b = temp_a % temp_b;
	}
}
/*
int	main(void)
{
	int	x = 13;
	int	y = 5;
	
	printf("\n");
	printf("x = %d, y = %d\n", x, y);

	ft_ultimate_div_mod(&x, &y);

	printf("\n");
	printf("%d, %d\n", x, y);
	return 0;
}*/
