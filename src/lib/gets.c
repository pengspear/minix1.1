#include "../include/stdio.h"

char *
gets (char *str)
{
	register int ch;
	register char *ptr;

	ptr = str;
	while ((ch = getc(stdin)) != EOF && ch != '\n')
		*ptr++ = ch;

	if (ch == EOF && ptr==str)
		return(NULL);
	*ptr = '\0';
	return(str);
}
