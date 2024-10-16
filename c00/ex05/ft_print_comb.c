/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:40:09 by codebind          #+#    #+#             */
/*   Updated: 2024/10/15 19:31:30 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)

{
	int i = 48;
	while(i < 56)
    {
	int j = i + 1;
	while(j < 57)
       {
	int k = j + 1;	
	while(k < 58)
       	{

	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (!(i == 55 && j == 56 && k == 57))
	{
	write(1, ", ", 1);
	}
        k++;
      }
      j++;
    }
    i++;
  }
}	

int main(void)
{
	ft_print_comb();
	return 0;
}
