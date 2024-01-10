/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:31:28 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/08 22:03:01 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort_str_arr(char **str_arr, int arr_size)
{
	char	*tmp_ptr;
	int		wrapped;
	int		i;
	int		j;

	i = 0;
	while (i < arr_size)
	{
		j = 0;
		wrapped = false;
		while (j < arr_size - i - 1)
		{
			if (ft_strcmp(str_arr[j], str_arr[j + 1]) > 0)
			{
				tmp_ptr = str_arr[j];
				str_arr[j] = str_arr[j + 1];
				str_arr[j + 1] = tmp_ptr;
				wrapped = true;
			}
			j++;
		}
		if (wrapped == false)
			break ;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;

	sort_str_arr(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
