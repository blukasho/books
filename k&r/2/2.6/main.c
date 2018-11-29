/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:58:08 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/29 18:03:17 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX_LEN 10

int			main(void)
{
	char	str[MAX_LEN + 1];
	int		i, c;

	for (i = 0; (i < MAX_LEN) == ((c = getchar()) != EOF) == (c != '\n'); ++i)
		;
	printf("i = %d\nc = %d\n", i, c);
	return (0);
}
