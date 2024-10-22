/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:25:35 by codebind          #+#    #+#             */
/*   Updated: 2024/10/21 10:23:08 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10;
	int b = 12;

	printf("%d\n,%d\n", a, b);
	ft_swap(&a, &b);
	printf("%d\n,%d\n", a, b);
}
