#include "../include/lib.h"

PUBLIC int 
sync (void)
{
  return callm1(FS, SYNC, 0, 0, 0, NIL_PTR, NIL_PTR, NIL_PTR);
}
