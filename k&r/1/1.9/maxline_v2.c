/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxline_v2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:58:40 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/19 20:16:19 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAXLINE 81

int			get_line(char s[], int lim);
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
	if (max > 0 && max < MAXLINE)
		printf("%d\n%s", max, longest);
	else if (max > 0)
		printf("%d\n\"%s\"", max, longest);
	return (0);
}

int			get_line(char s[], int lim)
{
	int		c, i;

	for (i = 0; i < lim -1 && (c = getchar ()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	if (c != '\n')
		while ((c = getchar()) != EOF && c != '\n')
			++i;
	return (i);
}

void 		copy(char to[], char from[])
{
	int		i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
	to[i] = '\0';
}
