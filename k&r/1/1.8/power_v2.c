/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power_v2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 11:45:53 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/18 11:55:41 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define POW 5

int		power(int base, int n)
{
	int p;

	for (p = 1; n > 0; --n)
		p *= base;
	return (p);
}

int		main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d ^ %d %d\n", i , POW,  power(i, POW));
	return (0);
}
