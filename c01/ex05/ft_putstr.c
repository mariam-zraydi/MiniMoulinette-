/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:15:28 by codebind          #+#    #+#             */
/*   Updated: 2024/10/22 12:27:14 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	while(*str != '\0')
        {
	write(1, str, 1);
	str++;
	}
}

int main()
{
	char *str = "m marmar";
	printf("%s\n", str);
}
