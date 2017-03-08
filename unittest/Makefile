.PHONY: all
.PHONY: clean
.PHONY: lalibs 

LIBS= -lpthread  -I ../lib
OBJS= ../lib/*.o

FLAGS= -g -Wformat-security

all: 
	for file in `ls *.cpp *.c 2>/dev/null`; do \
	    g++ $(LIBS) $(FLAGS) $(OBJS) $$file -o `echo $$file | sed -r 's/(.*)\.cpp/\1/g'`   ; \
	done

lalibs:
	cd ../lib; $(MAKE)

clean:
	rm -fr app core
	rm -fr ../lib/*.o
