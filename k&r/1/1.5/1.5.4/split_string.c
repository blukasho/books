/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 12:50:08 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/17 13:03:18 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define IN 1
#define OUT 0

int		main(void)
{
	int c, state, nl;

	state = OUT;
	nl = OUT;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (nl == IN)
				putchar('\n');
			state = nl = OUT;
		}
		else
		{
			state = nl = IN;
			putchar(c);
		}
	}
	return (0);
}
