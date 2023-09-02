/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:25:35 by qdo               #+#    #+#             */
/*   Updated: 2023/09/02 15:05:00 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print(int arr[11], int *count)
{
	int		index;
	char	int_to_char;

	index = 0;
	(*count)++;
	while (index < 10)
	{
		int_to_char = arr[index] + '0';
		write(1, &int_to_char, 1);
		index++;
	}
	write(1, "\n", 1);
}

void	ft_ten_queens_puzzle2(int arr[11], int cur, int pre, int *count)
{
	if (cur == 10)
		ft_print(arr, count);
	else
	{	
		arr[cur] = 0;
		while (arr[cur] <= 9)
		{
			pre = 1;
			while (cur - pre >= 0)
			{
				if (arr[cur] != arr[cur - pre]
					&& arr[cur] != arr[cur - pre] + pre
					&& arr[cur] != arr[cur - pre] - pre)
					pre++;
				else
					break ;
			}
			if (pre > cur)
			{
				ft_ten_queens_puzzle2(arr, (cur + 1), 1, count);
			}
			arr[cur]++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[11];
	int	count;

	count = 0;
	ft_ten_queens_puzzle2(arr, 0, 1, &count);
	return (count);
}

// int	main(void)
// {
// 	ft_ten_queens_puzzle();
// }

// #include <stdio.h>
// #include <unistd.h>

// int	ft_ten_queens_puzzle2(char *a, char arr[11])
// {
// 	arr[0] = 0;
// 	while (arr[0] <= 9)
// 	{
// 		arr[1] = 0;
// 		while (arr[1] <= 9)
// 		{
// 			if (arr[1] != arr[0] 
// 			&& arr[1] != arr[0] + 1 
// 			&& arr[1] != arr[0] - 1)
// 			{
// 				arr[2] = 0;
// 				while (arr[2] <= 9)
// 				{
// 					if (arr[2] != arr[1] 
// 					&& arr[2] != arr[1] + 1
// 					 && arr[2] != arr[1] - 1)
// 					{
// 						if (arr[2] != arr[0] 
// 						&& arr[2] != arr[0] + 2 
// 						&& arr[2] != arr[1] - 2)
// 						{
// 							arr[3] = 0;
// 							while (arr[3] <= 9)
// 							{
// 								if (arr[3] != arr[2] 
// 								&& arr[3] != arr[2] + 1 
// 								&& arr[3] != arr[2] - 1)
// 								{
// 									if (arr[3] != arr[1] 
// 									&& arr[3] != arr[1] + 2 
// 									&& arr[3] != arr[1] - 2)
// 									{
// 										if (arr[3] != arr[0] 
// 										&& arr[3] != arr[0] + 3 
// 										&& arr[2] != arr[1] - 3)
// 										{
// 										}
// 									}
// 									arr[2]++;
// 								}
// 							}
// 						}
// 					}
// 					arr[2]++;
// 				}
// 			}
// 			arr[1]++;
// 		}
// 		arr[0]++;
// 	}
// }

// int	ft_ten_queens_puzzle(void)
// {
// 	char	*a;
// 	char	arr[11];
// 	a = "0123456789";
// 	ft_ten_queens_puzzle2(a, arr);
// }