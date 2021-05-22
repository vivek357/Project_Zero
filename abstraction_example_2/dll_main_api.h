#ifndef __DLL_MAIN_API__
#define __DLL_MAIN_API__

#include <stdint.h>
struct greet_api
{
	int (*say_hello)(char *name);
	int (*say_goodbye)(void);
};

/*Implementation of Hello Function*/
int say_hello_fn(char *name);

/*Implementation of goodbye Function*/
int say_goodbye();

/*Implementaion to dll*/
uint32_t shared_lib_init_fn_name();

#endif
