/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 19:57:40 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/24 20:34:49 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
			   return (i);
			else if (i >= 46341)
			return (0);
		i++;	
		}
	}
	return (0);
}