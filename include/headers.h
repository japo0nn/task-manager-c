#ifndef __HEADERS_H__
#define __HEADERS_H__

#include "deftype.h"
#include "stdio.h"
#include "string.h"

#ifdef __unix__
#include "dirent.h"
#elif defined(_WIN32)
#include <windows.h>
#endif

#endif
