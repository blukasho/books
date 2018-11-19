/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_more_80_ch.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 22:18:48 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/19 23:36:26 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAXLEN 80

void		by_zero(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		s[i] = '\0';
}

int			main(void)
{
	int		c, i;
	char	s[MAXLEN + 1];

	for (i = 0; (c = getchar()) != EOF; ++i)
	{
		if (i < MAXLEN)
		{
			s[i] = c;
			if (c == '\n')
			{
				i = -1;
				by_zero(s);
			}
		}
		if (i == MAXLEN - 1)
		{
			s[i++] = c;
			s[i] = '\0';
			printf("%s", s);
			by_zero(s);
			while ((c = getchar()) != EOF && c != '\n')
				putchar(c);
			if (c == '\n')
				printf("\n");
			i = -1;
		}
	}
	return (0);
}
