#ifndef __DEFTYPE_H__
#define __DEFTYPE_H__

#define DIGITS_COUNT 10

typedef enum { false, true } bool;

extern const char DIGITS[];

bool is_digit_string(char *str);

#endif
