/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:39:21 by fabiogom          #+#    #+#             */
/*   Updated: 2025/05/16 10:17:49 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *getalltext (int fd, char *buf)
{
		
	ssize_t  bytesread;
	char *bufaux;
	bufaux = malloc (BUFFER_SIZE + 1);
	
	if(bufaux == NULL)
		return (0); 

	while (ft_strchr(buf, '\n'))
	{
		bytesread = read(fd, bufaux, BUFFER_SIZE); 
		
		if(bytesread < 0)
		{	
			free (bufaux);
			return (NULL); 
		}

		bufaux[bytesread] = '\0'; 

		buf = ft_strjoin (buf, bufaux); 

	}	
	free(bufaux);
	return (buf); 
}



char *get_next_line(int fd)
{
 
	static char *buf; 
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
	getalltext(fd, buf);  

	return(buf); 
}


int main ()
{
	char *buf;
	//fd 0 STDIN(Teclado), fd 1 STDOUT(Tela), fd 2 STDERR (Erro);

	printf("Digite qualquer coisa");  
	buf = get_next_line(0); 
	
	printf("Conteudo digitado foi %s", buf); 	
	return (0); 
}



