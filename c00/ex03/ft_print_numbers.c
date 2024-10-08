/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:32:54 by codebind          #+#    #+#             */
/*   Updated: 2024/10/07 20:49:36 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)

{
	char i = '0';
	while(i <= '9')
   {
	write(1, &i, 1);
	i++;
   }

}
int main(void)
{
    ft_print_numbers(); // Call the function to print numbers
    return 0;
}
