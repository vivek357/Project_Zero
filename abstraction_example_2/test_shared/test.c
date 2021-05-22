#include <stdio.h>
#include <stdint.h>
#include "test.h"

struct greet_dll_api greet_dll_api = {
	.say_hello = say_hello_fn,
	.say_goodbye = say_goodbye_fn,
};

int say_hello_fn(char *name)
{
        printf("Harley Quinn, Hello %s\n", name);
        return 0;
}

int say_goodbye_fn()
{
        printf("bye bye world!\n");
        return 0;
}

uint32_t so_init_fn_name()
{
	greet_dll_api.say_hello("Something cooking");
	greet_dll_api.say_goodbye();

	printf("%s: vivek dll_init", __FUNCTION__);

	return 0;
}  
