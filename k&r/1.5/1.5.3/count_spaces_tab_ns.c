/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_spaces_tab_ns.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 10:49:27 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/17 11:01:33 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SP  ' '
#define NS  '\n'
#define TB  '\t'

int		main(void)
{
	int c, sp, ns, tb;

	sp = ns = tb = 0;
	while ((c = getchar()) != EOF)
		if (c == SP)
			++sp;
		else if (c == NS)
			++ns;
		else if (c == TB)
			++tb;
	printf("spaces = %d tabs = %d strings = %d\n", sp, tb, ns);
	return (0);
}
