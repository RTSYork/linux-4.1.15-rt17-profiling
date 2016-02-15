#include <linux/profile_timers.h>
#include <linux/syscalls.h>

void *profile_timers_base = NULL;

void init_profile_timers() {
	if (profile_timers_base == NULL) {
		profile_timers_base = ioremap_nocache(PROF_TIMERS_BASE, PROF_TIMERS_LENGTH);
	}
}

SYSCALL_DEFINE0(prof_init_timers) {
	init_profile_timers();
	return 0;
}
