/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:34:49 by qdo               #+#    #+#             */
/*   Updated: 2023/09/02 11:25:17 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{	
	int	count;

	if (nb <= 1)
	{
		return (0);
	}
	count = 2;
	while (count <= nb / count)
	{
		if (nb % count == 0)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(1));

	printf("%d", ft_is_prime(2));
	printf("%d", ft_is_prime(3));
	printf("%d", ft_is_prime(5));
	printf("%d", ft_is_prime(7));
	printf("%d", ft_is_prime(11));
	printf("%d", ft_is_prime(13));
	printf("%d", ft_is_prime(17));
	printf("%d", ft_is_prime(19));
	printf("%d", ft_is_prime(199));
	printf("%d\n", ft_is_prime(89));

	printf("%d", ft_is_prime(4));
	printf("%d", ft_is_prime(9));
	printf("%d", ft_is_prime(16));
	printf("%d", ft_is_prime(15));
	printf("%d", ft_is_prime(18));
	printf("%d", ft_is_prime(201));
	printf("%d", ft_is_prime(473));
	printf("%d", ft_is_prime(28));
	printf("%d", ft_is_prime(1006));
	printf("%d\n", ft_is_prime(98));

	printf("%d\n", ft_is_prime(9001));

	printf("%d", ft_is_prime(9999));
	printf("%d", ft_is_prime(39));
}
*/