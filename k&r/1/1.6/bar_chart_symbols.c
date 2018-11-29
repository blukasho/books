/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bar_chart_symbols.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 22:24:28 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/17 23:11:08 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MIN 33
#define MAX 127

int		main(void)
{
	int ch[MAX - MIN];
	int c, i;

	for (i = 0; i < (MAX - MIN); ++i)
		ch[i] = 0;
	while ((c = getchar()) != EOF)
		if (c >= MIN && c < MAX)
			++ch[c - MIN];
	for (i = 0; i < 20; ++i)
		printf("\\|/");
	printf("\n");
	for (c = MIN; c < MAX; ++c)
	{
		printf("%c ", c);
		for (i = c - MIN; ch[i] > 0; --ch[i])
			printf("*");
		printf("\n");
	}
	return (0);
}
