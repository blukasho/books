/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_tb_bs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 11:57:09 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/17 12:01:50 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define TB '\t'
#define BS '\b'

int		main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		if (c == TB)
			printf("\\t");
		else if (c == BS)
			printf("\\b");
		else
			putchar(c);
	return (0);
}
