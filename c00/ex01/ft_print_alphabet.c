/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:11:56 by codebind          #+#    #+#             */
/*   Updated: 2024/10/14 16:00:09 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)

{
	int letter;
	letter = 97;

	while(letter <= 122)
	{
	write(1, &letter, 1);
	letter++;
        }

}

int main(void)

{
        ft_print_alphabet();
	return 0;
}
