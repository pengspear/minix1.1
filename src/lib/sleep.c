#include "../include/lib.h"
#include "../include/signal.h"

PRIVATE 
alfun (void){}		/* used with sleep() below */
PUBLIC 
sleep (int n)
{
/* sleep(n) pauses for 'n' seconds by scheduling an alarm interrupt. */
  signal(SIGALRM, alfun);
  alarm(n);
  pause();
}
