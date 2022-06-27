TARGET=hello-ncurses
CXX=g++
LD=g++
OBJS=32_hello_ncurses.cpp
NCURSES=-lncurses
TINFO=-ltinfo
all:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(NCURSES) $(TINFO)
clean:
	rm $(TARGET)

