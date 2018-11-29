/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fahr_to_cels.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 10:51:18 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/18 11:13:18 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX 300
#define MIN 0
#define STEP 20

double		fahr_to_cels(int f);

int			main(void)
{
	int i;

	for (i = MIN; i <= MAX; i += STEP)
		printf("%3d%6.1f\n", i, fahr_to_cels(i));
	return (0);
}

double		fahr_to_cels(int f)
{
	return ((5.0/9.0) * (f - 32));
}
