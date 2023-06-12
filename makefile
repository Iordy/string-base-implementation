

output : main.o string.o
	g++ main.o string.o -o output

main.o : main.cpp
	g++ -c main.cpp

string.o : c++files/string.cpp headers/string.h
	g++ -c c++files/string.cpp


clean : 
	rm *.o output