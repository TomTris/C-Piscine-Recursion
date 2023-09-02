/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:25:13 by qdo               #+#    #+#             */
/*   Updated: 2023/08/31 15:32:45 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	count;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	count = nb;
	while (count > 1)
	{
		count--;
		nb = nb * count;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d",ft_iterative_factorial(0));
}
*/