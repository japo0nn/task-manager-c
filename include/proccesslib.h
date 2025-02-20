#ifndef __PROCCESSLIB_H__
#define __PROCCESSLIB_H__

#define CHAR_DEFAULT_SIZE 256

typedef struct {
	char pid[CHAR_DEFAULT_SIZE];
	char ppid[CHAR_DEFAULT_SIZE];
	char name[CHAR_DEFAULT_SIZE];
	char mem_size[CHAR_DEFAULT_SIZE];
} proccess;

#endif
