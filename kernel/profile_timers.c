#include <linux/profile_timers.h>

void *profile_timers_base = NULL;

void init_profile_timers() {
	if (profile_timers_base == NULL) {
		profile_timers_base = ioremap_nocache(PROF_TIMERS_BASE, PROF_TIMERS_LENGTH);
	}
}
