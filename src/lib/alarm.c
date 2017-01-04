#include "../include/lib.h"

PUBLIC int 
alarm (unsigned int sec)
{
  return callm1(MM, ALARM, (int) sec, 0, 0, NIL_PTR, NIL_PTR, NIL_PTR);
}
