#include "task_manager.h"
#include "unistd.h"

void clear_console();

int main(void) {
	int i = 0;
	while (i < 10) {
		list_proccesses();
		clear_console();
		printf("i = %d\n", i);
		sleep(3);
		i++;
	}
	return 0;
}

void clear_console() { printf("\033[H\033[J"); }
