/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 01:59:00 by yopi              #+#    #+#             */
/*   Updated: 2022/03/28 13:51:41 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

char	*ft_strdup(const char *str)
{
	unsigned int	i;
	size_t			len;
	char			*save;

	i = 0;
	len = ft_strlen(str);
	save = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		save[i] = str[i];
		i++;
	}
	save[i] = 0;
	return (save);
}

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char	save[999999];
	char	buff[1];
	char	*line;
	int		i;
	
	save[0] = 0;
	i = 0;
	if (fd < 0)
		return (NULL);
	while (read(STDIN_FILENO, buff, 1) == 1)
	{
		save[i] = buff[0];
		save[i + 1] = '\0';
		if (save[i] == '\n')
			break ;
		i++;
	}
	if (save[0] == '\0')
		return (NULL);
	line = ft_strdup(save);
	return (line);
}