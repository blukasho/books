/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spit_whitespaces_del_empty_string.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 23:50:37 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/20 00:04:57 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int i, c, s;

	i = s = 0;
	while ((c = getchar()) != EOF)
	{
		if (s == 0 && c == '\n')
			s = -1;
		else if (c == ' ' || c == '\t')
			++i;
		else
		{
			if (i > 0)
			{
				putchar(' ');
				i = 0;
			}
			putchar(c);
			if (c == '\n')
				s = -1;
		}
		++s;
	}
}
