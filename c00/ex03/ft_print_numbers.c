/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:29:12 by codebind          #+#    #+#             */
/*   Updated: 2024/10/14 18:43:35 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)

{
	int nbr = 48;
	
	while(nbr <= 57)
	{
	write(1, &nbr, 1);
	nbr++;
	}
}
int main(void)
{
	ft_print_numbers();
	return 0;
}
