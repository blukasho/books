/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squeeze.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 12:27:21 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/02 12:33:16 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}

int			main(void)
{
	char	s[] = "Hello, world!!!";

	printf("%s\n", s);
	squeeze(s, 'l');
	printf("%s\n", s);
	return (0);
}
