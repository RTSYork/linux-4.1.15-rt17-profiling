#ifndef __PROFILE_TIMER_H__
#define __PROFILE_TIMER_H__

#include <asm/io.h>

extern void *profile_timers_base;

#define PROF_TIMERS_BASE 0x50000000
#define PROF_TIMERS_LENGTH 0x6000

#define PROF_TIMER_START_COMM 0x00000080
#define PROF_TIMER_STOP_COMM 0x00000000

#define PROF_TIMER00 0x0000
#define PROF_TLR00   0x0004
#define PROF_TCR00   0x0008
#define PROF_TIMER01 0x0010
#define PROF_TLR01   0x0014
#define PROF_TCR01   0x0018
#define PROF_TIMER02 0x1000
#define PROF_TLR02   0x1004
#define PROF_TCR02   0x1008
#define PROF_TIMER03 0x1010
#define PROF_TLR03   0x1014
#define PROF_TCR03   0x1018
#define PROF_TIMER04 0x2000
#define PROF_TLR04   0x2004
#define PROF_TCR04   0x2008
#define PROF_TIMER05 0x2010
#define PROF_TLR05   0x2014
#define PROF_TCR05   0x2018
#define PROF_TIMER06 0x3000
#define PROF_TLR06   0x3004
#define PROF_TCR06   0x3008
#define PROF_TIMER07 0x3010
#define PROF_TLR07   0x3014
#define PROF_TCR07   0x3018
#define PROF_TIMER08 0x4000
#define PROF_TLR08   0x4004
#define PROF_TCR08   0x4008
#define PROF_TIMER09 0x4010
#define PROF_TLR09   0x4014
#define PROF_TCR09   0x4018
#define PROF_TIMER10 0x5000
#define PROF_TLR10   0x5004
#define PROF_TCR10   0x5008
#define PROF_TIMER11 0x5010
#define PROF_TLR11   0x5014
#define PROF_TCR11   0x5018

void init_profile_timers(void);

#define PROF_TIMER_SET(x, y) if (profile_timers_base) {iowrite32(y, profile_timers_base + x);}
#define PROF_TIMER_START(x) PROF_TIMER_SET(x, PROF_TIMER_START_COMM)
#define PROF_TIMER_STOP(x) PROF_TIMER_SET(x, PROF_TIMER_STOP_COMM)

#endif /* __PROFILE_TIMER_H__ */
