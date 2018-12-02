/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squeeze_v2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 12:38:43 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/02 13:11:30 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		squeeze_v2(char s1[], char s2[])
{
	int		i, j, k;

	for (i = 0; s2[i]; i++)
	{
		for (j = k = 0; s1[j]; j++)
			if (s1[j] != s2[i])
				s1[k++] = s1[j];
		s1[k] = '\0';
	}
}

int			main(void)
{
	char	s1[] = "Hello, world!!!";

	printf("%s\n", s1);
	squeeze_v2(s1, "Ho!ol");
	printf("%s\n", s1);
	return (0);
}
