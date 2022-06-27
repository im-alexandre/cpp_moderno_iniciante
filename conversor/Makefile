TARGET=conversor
TARPATH=/usr/local/bin/
CC=g++
LD=g++
OPT=-O2
WARN=-Wall
CCFLAGS=$(DEBUG) $(OPT)
OBJS=main.cpp project.cpp
all: $(OBJS)
	$(LD) -o $(TARGET) $(OBJS)

main.o: main.cpp
	$(CC) -c $(CCFLAGS) main.cpp -o main.o 

project.o: project.cpp
	$(CC) -c $(CCFLAGS) project.cpp -o project.o 

install:
	@install $(TARGET) $(TARPATH)$(TARGET)
	rm -rf conversor *.o

uninstall:
	@rm -rf $(TARPATH)$(TARGET)

clean:
	rm -f conversor *.o


