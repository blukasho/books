/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fahr_to_cels_v3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:16:21 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/16 15:21:39 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	float fahr, cels;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf(" C     F\n");
	while (fahr <= upper)
	{
		cels = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f %6.1f\n", fahr, cels);
		fahr += step;
	}
	return (0);
}
