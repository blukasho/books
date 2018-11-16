/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cels_to_fahr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:25:13 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/16 15:40:29 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	float fahr, cels;
	int lower, upper, step;

	lower = -40;
	upper = 40;
	step = 5;
	cels = lower;
	printf(" F       C \n");
	while (cels <= upper)
	{
		fahr = (cels * 5.0 / 9.0) + 32;
		printf("%4.1f %6.0f\n", fahr, cels);
		cels += step;
	}
	return (0);
}
