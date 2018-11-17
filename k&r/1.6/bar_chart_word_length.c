/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bar_chart_word_length.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:32:02 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/17 18:23:30 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX_LEN 21
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
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (l < MAX_LEN && state == IN)
				++wl[l - 1];
			state = l = OUT;
		}
		else
		{
			state = IN;
			++l;
		}
	}
	for (i = 1; i < MAX_LEN; ++i)
		printf("%3d", i);
	printf("\n");
	for (state = 0; state < MAX_LEN; ++state)
	{
		for (i = 0; i < MAX_LEN; ++i)
			if (wl[i] > 0 && wl[i]--)
				printf("  *");
			else
				printf("   ");
		printf("\n");
	}
	return (0);
}
