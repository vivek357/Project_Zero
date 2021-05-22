#ifndef __TEST_H__
#define __TEST_H__

struct search_dll_api 
{       
        int  (*lsearch)(int *);
        int  (*bsearch)(int *);
	void (*pelement)();                                                       
};                                                                                      
                                                                                        
int linear_search_fn(int *);
int binary_search_fn(int *);
void print_element_fn();                                                                   
        
#endif 
