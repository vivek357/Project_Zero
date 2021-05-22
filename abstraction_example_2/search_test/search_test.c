#include <stdio.h>
#include <stdint.h>
#include "test.h"

struct search_dll_api search_dll_api = {
	.lsearch = linear_search_fn,
	.bsearch = binary_search_fn,
	.pelement = print_element_fn,
};

uint32_t shared_lib_init_fn_name()
{
	int *array = {10,2,43,5,23,87,2};

	search_dll_api.lsearch(array);
	search_dll_api.bsearch(array);
	search_dll_api.pelement();
	
	printf("%s: vivek dll_init", __FUNCTION__);

	return 0;
}
  
int linear_search_fn(int *list)
{
        printf("%s: Harley Quinn, Hello \n", __FUNCTION__);
        return 0;
}

int binary_search_fn(int *list)
{
        printf("%s: bye bye world!\n", __FUNCTION__);
        return 0;
}

void print_element_fn()
{
        printf("%s: bye bye world!\n", __FUNCTION__);
}

