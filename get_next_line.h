/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbooth <mbooth@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 21:53:20 by mbooth            #+#    #+#             */
/*   Updated: 2014/11/30 02:56:58 by mbooth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "libft/includes/libft.h"
#include <fcntl.h>

#define BUFF_SIZE 10000

int		get_next_line(int const fd, char **line);

#endif
