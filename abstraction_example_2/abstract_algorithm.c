#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <string.h>
#include "dll_main_api.h"

int say_hello_fn(char *name)
{
	printf("Hello %s\n", name);
	return 0;
}

int say_goodbye_fn()
{
	printf("Goodbye\n");
	return 0;
}

/*A struct implementing the API*/
struct greet_api greet_api = 
{
	.say_hello = say_hello_fn,
	.say_goodbye = say_goodbye_fn,
};

int main(int argc, char *argv[])
{
        void *handle;
        void (*func_dll_name)(const char*);

	greet_api.say_hello(argv[1]);
	greet_api.say_goodbye();

/* printf("%p, %p, %p \n", greet_api.say_hello, say_hello_fn, &say_hello_fn);*/


        if (argc != 2) {
                fprintf(stderr, "Usage: %s algorithm type\n", argv[0]);
                return EXIT_FAILURE;
        }

	if (strcmp(argv[1], "search") == 0) {
        	handle = dlopen("./libsearch_test.so", RTLD_LAZY);
	}
	else if (strcmp(argv[1], "sort") == 0) {
        	handle = dlopen("./libsort_test.so", RTLD_LAZY);
	}
   	if (!handle) {
	        /* fail to load the library */
        	fprintf(stderr, "Error: %s\n", dlerror());
        	return EXIT_FAILURE;
   	}

	*(void**)(&func_dll_name) = dlsym(handle, "shared_lib_init_fn_name");
     	if (!func_dll_name) {
                /* no such symbol */
                fprintf(stderr, "Error: %s\n", dlerror());
                dlclose(handle);
                return EXIT_FAILURE;
        }
	

        func_dll_name(argv[1]);
        dlclose(handle);

	return 0;
}
