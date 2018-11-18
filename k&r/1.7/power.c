/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 10:33:21 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/18 10:36:34 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		power(int m, int n);

int		main(void)
{
	int i;
	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i , power(2, i) , power(-3, i));
	return (0);
}

int		power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p *= base;
	return (p);
}
