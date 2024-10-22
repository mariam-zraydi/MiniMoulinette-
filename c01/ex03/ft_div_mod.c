/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:15:40 by codebind          #+#    #+#             */
/*   Updated: 2024/10/21 10:59:26 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
	{
  	*div = a / b;
	*mod = a % b;
	}
}

int main()
{
	int a = 12;
	int b = 233;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d\n", div, mod);
}
