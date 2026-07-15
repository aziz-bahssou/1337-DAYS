/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:19:30 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/15 14:35:31 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = malloc ((max - min) * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i++] = min++;
	}
	return (arr);
}