/* Generated by the Systemtap dtrace wrapper */


#define _SDT_HAS_SEMAPHORES 1


#define STAP_HAS_SEMAPHORES 1 /* deprecated */


#include <sys/sdt.h>

/* AGENT_SMALLOC ( int ) */
#if defined STAP_SDT_V1
#define AGENT_SMALLOC_ENABLED() __builtin_expect (smalloc_semaphore, 0)
#define agent_smalloc_semaphore smalloc_semaphore
#else
#define AGENT_SMALLOC_ENABLED() __builtin_expect (agent_smalloc_semaphore, 0)
#endif
__extension__ extern unsigned short agent_smalloc_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AGENT_SMALLOC(arg1) \
DTRACE_PROBE1 (agent, smalloc, arg1)

/* AGENT_SFREE ( ) */
#if defined STAP_SDT_V1
#define AGENT_SFREE_ENABLED() __builtin_expect (sfree_semaphore, 0)
#define agent_sfree_semaphore sfree_semaphore
#else
#define AGENT_SFREE_ENABLED() __builtin_expect (agent_sfree_semaphore, 0)
#endif
__extension__ extern unsigned short agent_sfree_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AGENT_SFREE() \
DTRACE_PROBE (agent, sfree)

