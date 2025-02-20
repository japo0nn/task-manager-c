#include "task_manager.h"

#include <stdio.h>

#ifdef __unix__
void list_proccesses() {
	DIR *dp;
	struct dirent *ep;
	dp = opendir("/proc");
	printf("%-20s %-10s %-10s %-20s\n", "Name", "Pid", "PPid", "Memory");
	if (dp != NULL) {
		while (ep = readdir(dp)) {
			if (is_digit_string(ep->d_name)) {
				char path[270];
				snprintf(path, sizeof(path), "/proc/%.58s/status", ep->d_name);
				FILE *proc_status = fopen(path, "r");
				if (!proc_status) {
					perror("File opening error");
				}
				proccess proc;
				memset(proc.name, 0xFF, CHAR_DEFAULT_SIZE);
				memset(proc.pid, 0xFF, CHAR_DEFAULT_SIZE);
				memset(proc.ppid, 0xFF, CHAR_DEFAULT_SIZE);
				memset(proc.mem_size, 0xFF, CHAR_DEFAULT_SIZE);
				char buffer[256];
				while (fgets(buffer, sizeof(buffer), proc_status)) {
					if (strncmp(buffer, "Name:", 5) == 0 &&
					    proc.name[0] != 0xFF) {
						sscanf(buffer, "Name: %s", proc.name);
					}
					if (strncmp(buffer, "Pid:", 4) == 0 &&
					    proc.pid[0] != 0xFF) {
						sscanf(buffer, "Pid: %s", proc.pid);
					}
					if (strncmp(buffer, "PPid:", 5) == 0 &&
					    proc.ppid[0] != 0xFF) {
						sscanf(buffer, "PPid: %s", proc.ppid);
					}
					if (strncmp(buffer, "VmRSS: ", 6) == 0 &&
					    proc.mem_size[0] != 0xFF) {
						sscanf(buffer, "VmRSS: %s", proc.mem_size);
					}
				}

				printf("%-20s %-10s %-10s %s kB\n", proc.name, proc.pid,
				       proc.ppid, proc.mem_size);
				fclose(proc_status);
			}
		}
		(void)closedir(dp);
	}
	return;
}
#endif
