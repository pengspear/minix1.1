#include "../include/lib.h"

PUBLIC int 
write (int fd, char *buffer, int nbytes)
{
  return callm1(FS, WRITE, fd, nbytes, 0, buffer, NIL_PTR, NIL_PTR);
}
