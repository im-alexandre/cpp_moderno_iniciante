TARGET=soma
CXX=g++
LD=g++
OBJS=soma.cpp
CMD=`pkg-config gtkmm-3.0 --cflags --libs` -export-dynamic
all:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(CMD)
clean:
	rm $(TARGET)

