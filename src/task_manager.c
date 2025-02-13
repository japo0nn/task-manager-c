#include "task_manager.h"

#ifdef __unix__
void list_proccesses() {
	DIR *dp;
	struct dirent *ep;
	dp = opendir("/proc");
	if (dp != NULL) {
		while (ep = readdir(dp)) {
			if (is_digit_string(ep->d_name)) {
				printf("PID = %s\n", ep->d_name);
			}
		}
		(void)closedir(dp);
	}
	return;
}
#endif
