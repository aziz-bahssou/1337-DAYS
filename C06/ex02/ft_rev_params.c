/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 00:01:50 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/15 00:19:02 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int j;

	argc--;
	while (argc > 0)
	{
		j = 0;
		while (argv[argc][j])
		{
			write (1, &argv[argc][j], 1);
			j++;
		}
		write (1, "\n", 1);
		argc--;
	}
}
