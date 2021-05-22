#include <stdio.h>
#include <stdint.h>
#include "test.h"

struct sort_dll_api sort_dll_api = {
	.isort = insertion_sort_fn,
	.bsort = bubble_sort_fn,
	.msort = merge_sort_fn,
	.plist = print_sorted_list_fn,	
};


uint32_t shared_lib_init_fn_name()
{
	int array[6] = {10,5,13,55,22,100};
	int size = 6;	
	sort_dll_api.isort(array, size);
	sort_dll_api.bsort(array, size);
	sort_dll_api.msort(array, size);
	sort_dll_api.plist(array, size);

	printf("%s: vivek dll_init", __FUNCTION__);

	return 0;
}
  
int *insertion_sort_fn(int *list, int size)
{
	/*int i, j, key;
	for(i = 1; i <= size; i++) 
	{
		key = list[i];
		j = i;
		while(list[j-1] > key && j <=1) {
			list[j] = list[j-1];
			j--;
		}
		list[j] = key;
	}*/


        printf("%s: Harley Quinn, Hello\n", __FUNCTION__);
        return 0;
}

int *bubble_sort_fn(int *list, int size)
{
        printf("%s: bye bye world!\n", __FUNCTION__);
        return 0;
}

int *merge_sort_fn(int *list, int size)
{
        printf("%s: Harley Quinn, Hello \n", __FUNCTION__);
        return 0;
}

void print_sorted_list_fn(int *list, int size) 
{
        printf("%s: Harley Quinn, Hello \n", __FUNCTION__);
}
