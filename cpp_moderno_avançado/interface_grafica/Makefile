TARGET=simple
CXX=g++
LD=g++
OBJS=simple-gtk.cpp
FLAGS=`pkg-config gtkmm-3.0 --cflags --libs`
all:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(FLAGS)
clean:
	rm $(TARGET)

