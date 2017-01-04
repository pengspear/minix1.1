#include "../include/stdio.h"

FILE *
freopen (char *name, char *mode, FILE *stream)
{
	FILE *fopen();

	if ( fclose(stream) != 0 )
		return NULL;

	return fopen(name,mode);
}
