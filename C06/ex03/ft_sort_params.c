/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 00:34:57 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/15 01:19:21 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compar(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i] && a[i] == b[i])
	{
		i++;
	}
	return (a[i] - b[i]);
}

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (compar(str[i], str[j]) > 0)
			{
				swap(&str[i], &str[j]);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	sort(argv + 1);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write (1, &argv[i][j++], 1);
		}
		write (1, "\n",1);
		i++;
	}
	return (0);
}
