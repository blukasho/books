/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxline.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 12:30:56 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/18 13:59:25 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAXLINE 1000

int			get_line(char line[], int lim);
void		copy(char to[], char from[]);

int			main(void)
{
	int		len, max;
	char	line[MAXLINE];
	char	longest[MAXLINE];

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return (0);
}

int			get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return (i);
}

void		copy(char to[], char from[])
{
	int i;

	for (i = 0; from[i] != '\0'; ++i)
		to[i] = from[i];
	to[i] = '\0';
}
