/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:30:41 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/09 14:35:39 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	passed;

	i = 0;
	passed = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			passed++;
		i++;
	}
	return (passed);
}
