/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxline_v3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:19:56 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/20 11:55:52 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAXLINE 1000

int				max;
char			line[MAXLINE + 1];
char			longest[MAXLINE + 1];

int				get_line(void);
void			copy(void);

int				main(void)
{
	int			len;
	extern int	max;
	extern char	longest[];

	max = 0;
	while ((len = get_line()) > 0)
		if (len > max)
		{
			max = len;
			copy();
		}
	if (max > 0)
		printf("%s", longest);
	return (0);
}

int				get_line(void)
{
	int			c, i;
	extern char	line[];

	for (i = 0; i < MAXLINE && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
		line[i++] = c;
	line[i] = '\0';
	return (i);
}

void			copy(void)
{
	int			i;
	extern char	line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
