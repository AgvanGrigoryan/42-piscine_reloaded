/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:08:06 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/08 17:54:08 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0 || nb > 12)
		return (0);
	factorial = 1;
	while (nb > 1)
		factorial *= nb--;
	return (factorial);
}
