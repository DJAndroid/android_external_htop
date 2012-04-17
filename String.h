/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_String
#define HEADER_String
/*
htop
(C) 2004-2010 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#define _GNU_SOURCE
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

#include "debug.h"

#define String_startsWith(s, match) (strstr((s), (match)) == (s))

extern char* String_copy(const char* orig);

char* String_cat(const char* s1, const char* s2);

char* String_trim(const char* in);

extern int String_eq(const char* s1, const char* s2);

char** String_split(const char* s, char sep);

void String_freeArray(char** s);

int String_contains_i(const char* s, const char* match);

char* String_getToken(const char* line, const unsigned short int numMatch);

#endif