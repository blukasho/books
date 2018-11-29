/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:02:38 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/21 15:03:49 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAXSTR 1000
#define MAXWIDTH 20

int			get_line(char str[], int lim);
void		add_line_break(char str[], int lim);
int			ft_strlen(char *str);

int			main(void)
{
	int 	len;
	char	str[MAXSTR + 1];

	while ((len = get_line(str, MAXSTR)) > 0)
		if (len > MAXWIDTH)
		{
			add_line_break(str, MAXWIDTH);
			printf("%s", str);
		}
		else
			printf("%s", str);
	return (0);
}

void		add_line_break(char str[], int lim)
{
	int		len;
	int		i;
	int		nl;
	int		bl;

	i = 0;
	bl = lim;
	len = ft_strlen(str);
	while (bl < len)
	{
		while (i < bl)
		{
			if (str[i] == ' ' || str[i] == '\t')
				nl = i;
			if (str[i] == '\t')
				str[i] = ' ';
			++i;
		}
		str[nl] = '\n';
		bl = nl + lim;
		i = nl + 1;
	}
}

int			get_line(char str[], int lim)
{
	int 	i, c;

	for (i = 0; (c = getchar()) != EOF && c != '\n' && i < lim - 1; ++i)
		str[i] = c;
	if (c == '\n')
		str[i++] = c;
	str[i] = '\0';
	return (i);
}

int			ft_strlen(char str[])
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}
