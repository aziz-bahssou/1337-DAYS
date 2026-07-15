/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokaziz <rokaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07 01:29:32 by rokaziz           #+#    #+#             */
/*   Updated: 2026/07 01:31:16 by rokaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void    ft_rev_int_tab(int *tab, int size){
    int j = 0;
    int temp = 0;
    size--;

    while(j < size){
        temp = tab[size];
        tab[size] = tab[j];
        tab[j] = temp;
        size--;
        j++;
    }
}