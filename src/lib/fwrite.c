#include "../include/stdio.h"

unsigned int 
fwrite (char *ptr, unsigned int size, unsigned int count, FILE *file)
{
	unsigned int s;
	unsigned int ndone = 0;

	if (size)
		while ( ndone < count ) {
			s = size;
			do {
				putc(*ptr++, file);
				if (ferror(file))
					return(ndone);
			} 
			while (--s);
			ndone++;
		}
	return(ndone);
}
