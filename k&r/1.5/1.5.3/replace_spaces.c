/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_whitespaces.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 11:14:22 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/17 11:44:43 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SP ' '

int		main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		if (c == SP)
		{
			putchar(SP);
			while ((c = getchar()) != EOF && c == SP)
				;
			putchar(c);
		}
		else
			putchar(c);
	return (0);
}
