TARGET=select
CXX=g++
LD=g++
OBJS=select.cpp
LIB_SQLITE=-lsqlite3
all:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(LIB_SQLITE)
clean:
	rm $(TARGET)

