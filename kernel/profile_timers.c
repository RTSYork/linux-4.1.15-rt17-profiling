#include <linux/profile_timers.h>
#include <linux/syscalls.h>

void *prof_timers_base = NULL;
bool prof_timers_enabled = 0;

void prof_timers_control(bool enable) {
	if (enable && prof_timers_base == NULL) {
		prof_timers_base = ioremap_nocache(PROF_TIMERS_BASE, PROF_TIMERS_LENGTH);
	}
	prof_timers_enabled = enable;
}

SYSCALL_DEFINE1(prof_timers_control, bool, enable) {
	prof_timers_control(enable);
	return 0;
}
