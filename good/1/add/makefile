all : add
add.o : add.cpp Sales_item.h
	g++ -g -c add.cpp
add : add.o
	g++ -g -o add add.o
clean:
	-rm *.o add
