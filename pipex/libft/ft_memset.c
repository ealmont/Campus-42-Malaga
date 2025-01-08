/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealmonte <ealmonte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:15:45 by ealmonte          #+#    #+#             */
/*   Updated: 2024/10/03 18:37:24 by ealmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*tp;
	size_t			i;

	tp = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		tp[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
