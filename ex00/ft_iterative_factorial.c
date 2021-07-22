/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 22:09:29 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/22 20:33:29 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	tot;

	tot = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		tot *= nb--;
	return (tot);
}
/* #include <stdio.h>
 int	main(void)
	{
	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
	printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
	printf(" 3 = %d (6)\n", ft_iterative_factorial(3));
	printf(" 4 = %d (24)\n", ft_iterative_factorial(4));
	}*/
