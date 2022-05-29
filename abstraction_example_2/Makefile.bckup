#all: abstract.c
#	gcc -g -Wall -o myabs abstract.c

#clean:
#	$(RM) myabs

app = abstract_algorithm
lib = libsearch_test.so libsort_test.so

CFLAGS = -Wall -ansi -pedantic
LDFLAGS = -ldl

all: $(app) $(lib)

lib%.so: *_test/%.c
	$(CC) -shared -fPIC $(CFLAGS) -o $@ $<

clean:
	$(RM) $(app) $(lib)

run: all
	./$(app) search_test
	./$(app) sort_test
#	./$(app) bear

#$(lib): test_shared/include/test.h

