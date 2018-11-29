/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fahr_to_cels_define.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:04:21 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/16 16:25:05 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int		main(void)
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	return (0);
}
