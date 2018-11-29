/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entab.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:14:51 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/20 18:03:47 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define TAB 8

int		main(void)
{
	int	c;
	int	sp;
	int	tb;
	int	p;

	tb = 0;
	sp = 0;
	p = 0;
	while((c = getchar()) != EOF && (++p))
		if ( c == ' ')
		{
			++sp;
		   if (p == TAB)
		   {
				++tb;
				p = 0;
				sp = 0;
		   }
		}
		else
		{
			while (tb > 0 && (tb--))
				putchar('\t');
			if (c == '\t')
				sp = 0;
			else
				while (sp > 0 && (sp--))
					putchar(' ');
			putchar(c);
			if (c == '\n' || c == '\t')
				p = 0;
		}
	return (0);
}
