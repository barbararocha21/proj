/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocha-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:07:32 by brocha-b          #+#    #+#             */
/*   Updated: 2025/09/13 16:31:57 by brocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x = 8;
	int	y = 0;

	printf("x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);

	return 0;
}*/
