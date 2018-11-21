/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_comments.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:02:34 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/21 18:57:10 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAXLINE 1000

int			ft_strstr(char *haystack, char *needle);
void		check_comments(char str[]);
int			get_line(char str[], int lim);
void		memdel(char str[]);

int			main(void)
{
	char	str[MAXLINE + 1];
	char	tmp[MAXLINE + 1];
	int		len;

	while ((len = get_line(str, MAXLINE)) > 0)
	{
		check_comments(str);
		len = -1;
		while (str[++len])
			if (str[len] != 8)
				putchar(str[len]);
		memdel(str);
	}
	return (0);
}

int			ft_strstr(char *haystack, char *needle)
{
	int 	i;
	int		r;
	char	*tmp;

	tmp = haystack;
	r = 0;
	i = 0;
	while (*haystack)
	{
		while (needle[i])
		{
			if (needle[i] != haystack[i])
				r = 1;
			++i;
		}
		if (r == 0)
			return ((char *)haystack - tmp);
		i = 0;
		r = 0;
		++haystack;
	}
	printf("hell\n");
	return (0);
}

//hello
void		check_comments(char str[])//hide comments
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '/' && str[i + 1] == '/')
			while (str[i] != '\n')
				str[i++] = 8;
		++i;
	}
	if ((i = ft_strstr(str, "/*")) > 0)
		printf("%d\n", i);
}

void		memdel(char str[])
{
	int		i;

	for (i = 0; str[i] != '\0'; ++i)
		str[i] = '\0';
}

int			get_line(char str[], int lim)
{
	int		i;
	int		c;

	i = 0;
	while ((c = getchar()) != EOF && c != '\n' && i < lim)
		str[i++] = c;
	if (c == '\n')
		str[i++] = c;
	str[i] = '\0';
	return (i);	
}
