
output : main.o string.o read-write.o
	g++ main.o string.o read-write.o -o output


main.o : main.cpp
	g++ -c main.cpp


string.o : c++files/string.cpp headers/string.h
	g++ -c c++files/string.cpp 


read-write.o : c++files/read-write.cpp headers/string.h
	g++ -c c++files/read-write.cpp



clean : 
	rm *.o output