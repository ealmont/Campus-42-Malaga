/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealmonte <ealmonte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:42:32 by ealmonte          #+#    #+#             */
/*   Updated: 2024/10/03 19:00:32 by ealmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t	leng;
	char	*dup;

	leng = ft_strlen(s1) + 1;
	if (s1 == NULL)
	{
		return (NULL);
	}
	dup = (char *)malloc((leng) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	ft_strlcpy (dup, s1, leng);
	return (dup);
}

/* int main (void) {
	char *c;
	c = ft_strdup("ahsgahshghhasf");
	printf("%s", c);
	free(c); 
	return (0);
} */