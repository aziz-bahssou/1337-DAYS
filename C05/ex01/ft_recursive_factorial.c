/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 00:38:20 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/14 17:52:29 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	if (nb == 1 || nb == 0)
		return(1);
	return nb * ft_recursive_factorial(nb - 1);
}
