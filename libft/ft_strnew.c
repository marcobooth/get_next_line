/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbooth <mbooth@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:33:08 by mbooth            #+#    #+#             */
/*   Updated: 2014/11/29 00:31:29 by mbooth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;
	size_t	i;

	i = 0;
	string = (char *)malloc(sizeof(char) * size + 1);
	if (!string)
		return (NULL);
	while (i < size)
	{
		string[i] = '\0';
		i++;
	}
    string[i] = '\0';
	return (string);
}
