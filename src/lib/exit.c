#include "../include/lib.h"

PUBLIC int 
exit (int status)
{
  return callm1(MM, EXIT, status, 0, 0, NIL_PTR, NIL_PTR, NIL_PTR);
}
