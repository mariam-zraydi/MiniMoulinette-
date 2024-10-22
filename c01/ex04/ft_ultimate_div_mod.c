/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:37:21 by codebind          #+#    #+#             */
/*   Updated: 2024/10/21 10:57:38 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    if( *b!= 0)
	{	
	int div = *a / *b;
	int mod = *a % *b;

	*a = div;
	*b = mod;

	}
}

int main()
{
	 int a = 12;
	 int b = 100;
	 int div;
	 int mod;

 ft_ultimate_div_mod(&a, &b);
 printf("%d, %d\n", a, b);	
}
