#include <signal.h>

#include "stdlib.h"
#include "task_manager.h"
#include "unistd.h"

void clear_console();
void handle_sigint(int sig);

int main(void) {
	signal(SIGINT, handle_sigint);
	printf("\033[2J");
	int i = 0;
	while (i < 10) {
		clear_console();
		printf("i = %d\n", i);
		sleep(3);
		i++;
	}
	return 0;
}

void clear_console() {
	printf("\033[H\n");
	int counter = 100;
	list_proccesses();
	fflush(stdout);
}

void handle_sigint(int sig) { exit(0); }  // TODO: SAFE exit!!!
