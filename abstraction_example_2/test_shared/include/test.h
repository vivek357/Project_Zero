#ifndef __TEST_H__
#define __TEST_H__

struct greet_dll_api 
{       
        int (*say_hello)(char *name);
        int (*say_goodbye)(void);                                                       
};                                                                                      
                                                                                        
int say_hello_fn(char *);
int say_goodbye_fn();                                                                   
        
#endif 
