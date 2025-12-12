/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:17:10 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/04 16:19:23 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str_join;

	j = 0;
	i = 0;
	k = 0;
	str_join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str_join)
		return (NULL);
	while (s1[i] != '\0')
	{
		str_join[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		str_join[k] = s2[j];
		j++;
		k++;
	}
	str_join[k] = '\0';
	return (str_join);
}

char	*ft_strchr(const char *s, int c)
{
	char	*tmp_s;
	char	to_find;

	tmp_s = (char *)s;
	to_find = (char) c;
	if (!s)
		return (NULL);
	while (*tmp_s != '\0')
	{
		if (*tmp_s == to_find)
			return (tmp_s);
		tmp_s++;
	}
	if (to_find == '\0' && *tmp_s == to_find)
		return (tmp_s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	somme;

	somme = 0;
	while (s[somme])
		somme++;
	return (somme);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
