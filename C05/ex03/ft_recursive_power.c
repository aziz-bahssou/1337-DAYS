/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:10:01 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07/14 19:03:43 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power == 0 )
		return (1);
	if (power < 0)
		return (0);
	if(power == 0){
		return nb;
	}
	return nb * ft_recursive_power(nb,power - 1);
}