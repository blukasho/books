/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_type_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:01:14 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/29 16:24:51 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int					main(void)
{
	unsigned char	u_ch_min = 0;
	unsigned char	u_ch_max = UCHAR_MAX;
	char			s_ch_min = SCHAR_MIN;	
	char			s_ch_max = SCHAR_MAX;	
	
	printf("unsigned char min %d\nunsigned char max %d\n", u_ch_min, u_ch_max);
	printf("signed char min %d\nsigned char max %d\n", s_ch_min, s_ch_max);

	unsigned short	u_sh_min = 0;
	unsigned short	u_sh_max = USHRT_MAX;
	short			s_sh_min = SHRT_MIN;
	short			s_sh_max = SHRT_MAX;

	printf("\nunsigned short min %d\nunsigned short max %d\n", u_sh_min, u_sh_max);
	printf("signed short min %d\nsigned short max %d\n", s_sh_min, s_sh_max);

	unsigned int	u_int_min = 0;
	unsigned int	u_int_max = UINT_MAX;
	int				s_int_min = INT_MIN;
	int				s_int_max = INT_MAX;

	printf("\nunsigned int min %u\nunsigned int max %u\n", u_int_min, u_int_max);
	printf("signed int min %d\nsigned int max %d\n", s_int_min, s_int_max);

	unsigned long	u_long_min = 0;
	unsigned long	u_long_max = ULONG_MAX;
	long			s_long_min = LONG_MIN;
	long			s_long_max = LONG_MAX;

	printf("\nunsigned long min %lu\nunsigned long max %lu\n", u_long_min, u_long_max);
	printf("signed long min %ld\nsigned long max %ld\n", s_long_min, s_long_max);

	float			float_min = FLT_MIN;
	float			float_max = FLT_MAX;

	printf("\nfloat min %.10e\nfloat max %.10e\n", float_min, float_max);
	return (0);
}
