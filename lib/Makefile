.PHONY: all

SRCS = $$(files=""; for file in `ls *.c *.cpp 2>/dev/null`; do files="$$files `basename $$file`";  done ; echo $$files)

CXXFLAGS += -Wno-format-security -Wno-write-strings

%.o: %.cpp
	g++ -g -o $@ -c $< $(CXXFLAGS)
all: 
	@echo build sources: $(SRCS)
	@echo build target: $(OBJS)
	for file in $(SRCS); do g++ -g $$file -c $(CXXFLAGS); done;

clean: 
	rm -fr *.o
