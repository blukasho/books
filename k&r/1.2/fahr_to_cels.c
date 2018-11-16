/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fahr_to_cels.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:59:09 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/16 14:15:41 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step =20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return (0);
}
