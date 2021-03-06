/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detab.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:05:32 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/20 13:11:40 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define TAB 4

int		main(void)
{
	int	c, i;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			for(i = 0; i < TAB; ++i)
				putchar(' ');
		else
			putchar(c);
	}
	return (0);
}
