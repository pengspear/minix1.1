#include "../include/lib.h"

PUBLIC int 
pause (void)
{
  return callm1(MM, PAUSE, 0, 0, 0, NIL_PTR, NIL_PTR, NIL_PTR);
}
