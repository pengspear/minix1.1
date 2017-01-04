#include "../include/stdio.h"

int 
fputs (register char *s, FILE *file)
{
	while ( *s ) 
		putc(*s++,file);
}
