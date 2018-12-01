/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htol.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 11:32:09 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/01 18:12:06 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <limits.h>

enum 			boolean {false, true};

typedef enum 	boolean bool;

bool			isdigit(int ch)
{
	return ((ch >= '0' && ch <= '9') ? true : false);
}

bool			isalpha(int ch)
{
	return ((ch >= 'A' && ch <= 'Z') ? true : false);
}

bool			valid_hex(const char *hex)
{
	if (*hex != '0' || *(hex + 1) != 'x' || strlen(hex + 2) > 16)
		return (false);
	++hex;
	while (*(++hex))
		if (!isdigit(*hex) && !(*hex >= 'A' && *hex <= 'F'))
			return (false);
	return (true);
}

long long		ft_pow(int	b, int p)
{
	long long	res;

	if (p == 0)
		return (1);
	res = b;
	while (--p)
		res = res * b; 
}

long long		htol(const char *hex)
{
	long long	res;
	int			len;
	int			tmp;

	res = 0;
	if (valid_hex(hex))
	{
		hex += 2;
		len = strlen(hex);
		while (--len >= 0)
		{
			if (isdigit(*hex))
				res = res + ((*hex - '0') * ft_pow(16, len));
			if (isalpha(*hex))
				res = res + ((*hex - 55) * ft_pow(16, len));
			++hex;
		}
		return (res);
	}
	return (-1);
}

int				main(int argc, char **argv)
{
	printf("%lld\n", htol(argv[1]));
	return (0);
}
