#ifndef __TEST_H__
#define __TEST_H__


struct sort_dll_api 
{       
        int* (*isort)(int *, int);
	int* (*bsort)(int *, int);
        int* (*msort)(int *, int);
	void (*plist)(int *, int);
};                                                                                      
                                                                                        
int *insertion_sort_fn(int *, int);
int *bubble_sort_fn(int *, int);
int *merge_sort_fn(int *, int);
void print_sorted_list_fn(int *, int);

#endif 
