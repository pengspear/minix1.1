#include "../include/stdio.h"

int 
fprintf (FILE *file, char *fmt, int args)
{
	_doprintf (file, fmt, &args);
	if ( testflag(file,PERPRINTF) )
        	fflush(file);
}


int 
printf (char *fmt, int args)
{
	_doprintf (stdout, fmt, &args);
	if ( testflag(stdout,PERPRINTF) )
        	fflush(stdout);
}
