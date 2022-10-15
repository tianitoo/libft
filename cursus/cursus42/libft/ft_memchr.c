/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:46:15 by hnait             #+#    #+#             */
/*   Updated: 2022/10/15 16:42:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;

	ss = (char *)s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == c)
		{
			return (&ss[i]);
		}
		i++;
	}
	return (0);
}
