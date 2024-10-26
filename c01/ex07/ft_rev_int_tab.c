/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:16:52 by codebind          #+#    #+#             */
/*   Updated: 2024/10/24 17:26:16 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int j = size - 1;
	int temp;
	
	while( i < j)
	{
	temp = tab[i];
	tab[i] =  tab[j];
	tab[j] = temp;
	i++;
	j--;
	}

}

int main()
{
	int tab[] = {1, 2, 3};
	int size = 3;

	ft_rev_int_tab(tab, size);
	printf("%d %d %d\n",   tab[0], tab[1], tab[2]);
}
