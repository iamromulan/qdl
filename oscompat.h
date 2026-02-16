/* SPDX-License-Identifier: BSD-3-Clause */
#ifndef __OSCOMPAT_H__
#define __OSCOMPAT_H__

#ifndef _WIN32

#include <err.h>

#define O_BINARY 0

#else // _WIN32

#include <sys/time.h>
#include <stdbool.h>

/* S_ISLNK may not be defined on all Windows toolchains */
#ifndef S_ISLNK
#define S_ISLNK(m) 0
#endif

void timeradd(const struct timeval *a, const struct timeval *b, struct timeval *result);

void err(int eval, const char *fmt, ...);
void errx(int eval, const char *fmt, ...);
void warn(const char *fmt, ...);
void warnx(const char *fmt, ...);

char *strcasestr(const char *haystack, const char *needle);

#endif

#endif
