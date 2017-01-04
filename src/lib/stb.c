    /* library routine for copying structs with unpleasant alignment */

int 
__stb (register int n, register char *f, register char *t)
    {
	    if (n > 0)
		    do
			    *t++ = *f++;
		    while (--n);
    }
