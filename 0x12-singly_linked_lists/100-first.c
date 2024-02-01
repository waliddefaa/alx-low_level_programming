#include <stdio.h>

void __attribute__((constructor)) hare(void);


/**
 * hare - wtites a str bfr the
 * main function is started
 */


void hare(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
