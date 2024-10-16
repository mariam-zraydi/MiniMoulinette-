/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:44:00 by codebind          #+#    #+#             */
/*   Updated: 2024/10/16 13:48:41 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)

{
	int letter = 122;
	
	while(letter >= 97)
	{
	write(1, &letter, 1);
	letter--;
	}
}
int main (void)
{
	ft_print_reverse_alphabet();
	return 0;
}

