/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 18:04:29 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/12 19:54:34 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (*src && nb--)
	{
		dest[i++] = *src;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
