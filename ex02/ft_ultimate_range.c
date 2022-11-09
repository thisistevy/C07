/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:14:39 by iung              #+#    #+#             */
/*   Updated: 2022/10/03 17:23:43 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int i;
	
	i = 0;
	size = max - min;

	*range = (int *)malloc(sizeof(int) * size);
	if (!range) 
		return (0);
	while (i < size)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

int	main()
{
	int *range;
	printf("%d", ft_ultimate_range(&range, 9, 15));
}
