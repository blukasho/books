/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bar_chart_word_length_v2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:31:23 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/17 23:22:30 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX_LEN 25
#define IN 1
#define OUT 0

int		main(void)
{
	int wl[MAX_LEN];
	int i, c, l, state;

	state = l = OUT;
	for (i = 0; i < MAX_LEN; ++i)
		wl[i] = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN && l <= MAX_LEN)
				++wl[l - 1];
			state = l = OUT;
		}
		else
		{
			state = IN;
			++l;
		}
	for (i = 0; i < MAX_LEN; ++i)
		printf("\\|/");
	printf("\n");
	for (state = 0; state < MAX_LEN; ++state)
	{
		printf("%2d ", state + 1);
		for (; wl[state] > 0; --wl[state])
			printf("*");
		printf("\n");
	}
	return (0);
}
