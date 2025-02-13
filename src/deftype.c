#include "headers.h"

const char DIGITS[] = "0123456789";

bool is_digit_string(char *str) {
	size_t length = strlen(str);
	for (int i = 0; i < length; i++) {
		bool isDigit = false;
#pragma unroll 4
		for (int j = 0; j < DIGITS_COUNT; j++) {
			if (str[i] == DIGITS[j]) {
				isDigit = true;
				break;
			}
		}
		if (!isDigit) {
			return isDigit;
		}
	}
	return true;
}
