#include "../include/lib.h"

PUBLIC gid 
getgid (void)
{
  int k;
  k = callm1(MM, GETGID, 0, 0, 0, NIL_PTR, NIL_PTR, NIL_PTR);
  return( (gid) k);
}
