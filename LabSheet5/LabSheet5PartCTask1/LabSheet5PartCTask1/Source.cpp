/*
* Contents: This file contains some string copying routines.
* Authors: Brian W. Kernighan and Dennis M. Ritchie (1988);
and Jyrki Katajainen (1998) which has been updated by James
Doody (2013)
* Copyright by the authors
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

/* Re Above Macro. The strcpy_s function, proposed for standardisation in ISO / IEC TR 24731,
is supported by the Microsoft C Runtime Library and some other C libraries.It returns non - zero if the source string
does not fit, and sets the buffer to the empty string(not the prefix!).
It is also explicitly unsupported by some libraries, including the GNU C library.
Warning messages produced by Microsoft's compilers suggesting programmers change strcpy and strncpy to this function have been
speculated by some to be a Microsoft attempt to lock developers to its platform */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>
#include <iostream>
using namespace std;

/*
* Source: Kernighan & Ritchie, The C Programming
* Language, 2nd Edition, Prentice Hall PTR, 1988,
* p. 106
*
* strcpy: copy t to s; array subsrcipt version
*/

void strcpy0(char* s, char* t)
{
	int i;

	i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}

/*
* Source: Kernighan & Ritchie, The C Programming
* Language, 2nd Edition, Prentice Hall PTR, 1988,
* p. 106
*
* strcpy: copy t to s; pointer version 1
*/

void strcpy1(char* s, char* t)
{
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

/*
* Source: Kernighan & Ritchie, The C Programming
* Language, 2nd Edition, Prentice Hall PTR, 1988,
* p. 105
*
* strcpy: copy t to s; pointer version 2
*/

void strcpy2(char* s, char* t)
{
	while ((*s++ = *t++) != '\0')
		;
}

/*
* Source: Kernighan & Ritchie, The C Programming
* Language, 2nd Edition, Prentice Hall PTR, 1988,
* p. 106
*
* strcpy: copy t to s; pointer version 3
*/

void strcpy3(char* s, char* t)
{
	while (*s++ = *t++)
		;
}


/*
* stringcopy: copy t to s; with a while loop
*/

char* stringcopy0(char* s, const char* t) {
	char* r = s;

	while (*t != '\0') {
		*r = *t;
		r = r + 1; t = t + 1;
	}
	*r = '\0';
	return s;
}

/*
* stringcopy: copy t to s; with an infinite while loop
*/

//enum bool{ false, true }; not needed for C++ compiler
#define loop while(true)

char* stringcopy1(char* s, const char* t) {
	char* r = s;

	loop{
		*r = *t;
		if (*t == '\0') break;
		r = r + 1; t = t + 1;
	}
	return s;
}

#undef loop

/*
* stringcopy: copy t to s; with an infinite for loop
*/

#define loop for( ; ; )

char* stringcopy2(char* s, const char* t) {
	char* r = s;

	loop{
		*r = *t;
		if (*t == '\0') break;
		r = r + 1; t = t + 1;
	}
	return s;
}

const int n = 100000000;  //The size of an int is implementation dependent. If the processors is 16 bit an int is 2 bytes. Nowadays, it's most often 4 bytes (32 bits).
// if you are not sure use sizeof(int) to get the size of an integer. If this is made to large the calls to malloc will fail.

const int KRroutines = 4;
const int myroutines = 4;


typedef void KRroutine(char*, char*);
KRroutine* KRcopy[] = { strcpy0, strcpy1, strcpy2, strcpy3 };
const char* KRname[] = { "strcpy0", "strcpy1", "strcpy2", "strcpy3" }; // make const

typedef char* myroutine(char*, const char*);
myroutine* mycopy[] = { stringcopy0, stringcopy1, stringcopy2, strcpy };
const char* myname[] = { "stringcopy0", "stringcopy1", "stringcopy2", "strcpy" };

int main(void) {

	clock_t c_time;

	int  i, j;
	char* b, * c;

	b = (char*)malloc(n * sizeof(char));
	assert(b != NULL);
	c = (char*)malloc(n * sizeof(char));
	assert(c != NULL);

	for (i = 0; i < KRroutines; i++) {
		for (j = 0; j < n; j++) { b[j] = 'b'; c[j] = 'c'; }
		c[n - 1] = '\0';
		printf("Testing routine %s ...\n", KRname[i]);
		c_time = clock();
		KRcopy[i](b, c);

		c_time = clock() - c_time;
		for (j = 0; j < n; j++) assert(b[j] == c[j]);
		//printf("  Copying time (ms): %ld\n", c_time);  //needed to change format specifier from %ld to %f for float
		cout << "  Copying time (ms): " << ((float)c_time / CLOCKS_PER_SEC) << endl;

	}


	for (i = 0; i < myroutines; i++) {
		for (j = 0; j < n; j++) { b[j] = 'b'; c[j] = 'c'; }
		c[n - 1] = '\0';
		printf("Testing routine %s ...\n", myname[i]);
		c_time = clock();
		b = mycopy[i](b, c);
		c_time = clock() - c_time;
		for (j = 0; j < n; j++) assert(b[j] == c[j]);
		//printf("  Copying time (ms): %ld\n", c_time);
		cout << "  Copying time (ms): " << ((float)c_time / CLOCKS_PER_SEC) << endl;
	}

	free(b); free(c);
	system("pause");
	return 0;
}

/* For your information the Linux implementation of strcpy is
#import <string.h>

 XXX This routine should be optimized.

 ANSI sez:
*   The `strcpy' function copies the string pointed to by `s2' (including
*   the terminating null character) into the array pointed to by `s1'.
*   If copying takes place between objects that overlap, the behavior
*   is undefined.
*   The `strcpy' function returns the value of `s1'.  [4.11.2.3]

char *
strcpy(char *s1, const char *s2)
{
	char *s = s1;
	while ((*s++ = *s2++) != 0)
		;
	return (s1);
}*/