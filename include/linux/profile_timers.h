#ifndef __PROFILE_TIMER_H__
#define __PROFILE_TIMER_H__

#include <asm/io.h>

extern void *profile_timers_base;

#define PROF_TIMERS_BASE 0x50000000
#define PROF_TIMERS_LENGTH 12288

#define PROF_TIMER_START_COMM 0x00000080
#define PROF_TIMER_STOP_COMM 0x00000000

#define PROF_TIMER0 0x0000
#define PROF_TLR0 0x0004
#define PROF_TCR0 0x0008
#define PROF_TIMER1 0x0010
#define PROF_TLR1 0x0014
#define PROF_TCR1 0x0018
#define PROF_TIMER2 0x1000
#define PROF_TLR2 0x1004
#define PROF_TCR2 0x1008
#define PROF_TIMER3 0x1010
#define PROF_TLR3 0x1014
#define PROF_TCR3 0x1018
#define PROF_TIMER4 0x2000
#define PROF_TLR4 0x2004
#define PROF_TCR4 0x2008
#define PROF_TIMER5 0x2010
#define PROF_TLR5 0x2014
#define PROF_TCR5 0x2018

void init_profile_timers(void);

#define PROF_TIMER_SET(x, y) iowrite32(y, profile_timers_base + x);
#define PROF_TIMER_START(x) PROF_TIMER_SET(x, PROF_TIMER_START_COMM)
#define PROF_TIMER_STOP(x) PROF_TIMER_SET(x, PROF_TIMER_STOP_COMM)

#endif /* __PROFILE_TIMER_H__ */
