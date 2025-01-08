/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealmonte <ealmonte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:31:36 by ealmonte          #+#    #+#             */
/*   Updated: 2025/01/02 19:31:38 by ealmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, size_t *counter)
{
	char	*str;

	str = ft_aux_pf(num, "0123456789");
	ft_putstr_pf(str, counter);
	free(str);
}
