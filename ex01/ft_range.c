/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:50:57 by iung              #+#    #+#             */
/*   Updated: 2022/10/06 18:05:48 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nb;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	if ((max - min) < 0)
		return (0);
	nb = malloc(sizeof(int) * (max - min));
	if (!nb)
		return (NULL);
	while (min < max)
	{
		nb[i] = min;
		min++;
		i++;
	}
	return (nb);
}
