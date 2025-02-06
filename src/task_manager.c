#include <stdio.h>
#include <task_manager.h>

#ifdef __unix__
#include <dirent.h>
#elif defined(_WIN32)
#include <windows.h>
#endif

#ifdef __unix__
void list_proccesses() {
	DIR *dp;
	struct dirent *ep;
	dp = opendir("/proc");
	if (dp != NULL) {
		while (ep = readdir(dp)) {
			puts(ep->d_name);
			printf("%c", *ep->d_name);
		}
		(void)closedir(dp);
	}
	return;
}
#endif
