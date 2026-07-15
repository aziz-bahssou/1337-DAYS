/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:36:27 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/15 15:07:35 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = (max - min);
	if (max <= min){
		*range = (NULL);
		return (0);
	}
	
	*range = malloc((len) * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i++] = min++;	
	}
	return(len);
}