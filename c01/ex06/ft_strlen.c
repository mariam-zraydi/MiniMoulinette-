/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:37:22 by codebind          #+#    #+#             */
/*   Updated: 2024/10/22 17:15:13 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int ft_strlen(char *str)
{
	int count = 0;

	while(*str != '\0')
	{
	count++;
	str++;
	}
        
	return count;

}

int main()
{
	char *str = "m a marmar";
	int lenght = ft_strlen(str);
	printf("%d\n", lenght);
	
}
