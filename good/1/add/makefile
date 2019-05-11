all : add addInt
add.o : add.cpp Sales_item.h
	g++ -g -c add.cpp
addInt.o : addInt.cpp Sales_item.h
	g++ -g -c addInt.cpp
add : add.o
	g++ -g -o add add.o
addInt : addInt.o
	g++ -g -o addInt addInt.o
clean:
	rm -rf *.o add addInt *.dSYM
