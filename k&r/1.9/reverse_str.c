/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 00:15:09 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/20 00:44:28 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAXLINE 1000

int			ft_strlen(char s[])
{
	int		i;

	for (i = 0; s[i]; ++i)
		;
	return (i);
}

void		reverse(char s[])
{
	int		i, a, c;

	i = ft_strlen(s);
	for (a = 0; a < --i; ++a)
	{
		c = s[a];
		s[a] = s[i];
		s[i] = c;
	}
}

int			get_line(char s[], int lim)
{
	int i, c;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return (i);
}

void		by_zero(char s[])
{
	int i;

	for (i = 0; s[i]; ++i)
		s[i] = '\0';
}

int			main(void)
{
	char	s[MAXLINE + 1];
	int		c;

	while ((c = get_line(s, MAXLINE + 1)) > 0)
	{
		reverse(s);
		printf("%s", s);
		by_zero(s);
	}
}
