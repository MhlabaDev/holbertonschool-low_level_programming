#include	"main.h"

/**
*	_strcpy	-	Copies	the	string	pointed	to	by	src
*	@dest:	The	destination	buffer
*	@src:	The	source	string
*
*	Return:	pointer	to	dest
*/
char	*_strcpy(char	*dest,	char	*src)
{
int	i;

for	(i	=	0;	src[i]	!=	0;	i++)
{
dest[i]	=	src[i];
}
dest[i]	=	0;	/*Copy	the	terminating	null	byte*/
return	(dest);	/*Return	pointer	to	dest*/
}
