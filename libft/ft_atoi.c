/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:06:28 by utygett           #+#    #+#             */
/*   Updated: 2022/01/16 16:15:13 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long long int		res;
	int					a;

	a = 1;
	res = 0;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			a = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		if ((res >= 922337203685477581 && a == 1)
			|| ((res >= 922337203685477580 && a == 1) && (*str - '0') > 7))
			return (-1);
		if ((res >= 922337203685477581 && a == -1)
			|| ((res >= 922337203685477580 && a == -1) && (*str - '0') > 7))
			return (0);
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * a);
}
