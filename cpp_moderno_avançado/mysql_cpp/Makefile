TARGET=create
CXX=g++
LD=g++
OBJS=create.cpp
LIB_MYSQL=-lmysqlcppconn
INCLUDE=/usr/include/cppconn
all:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(LIB_MYSQL) -L $(INCLUDE) -I $(INCLUDE)
clean:
	rm $(TARGET)

