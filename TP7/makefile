main: Entier.o main.o
	g++ -o main Entier.o main.o

Entier.o: Entier.cpp Entier.hpp
	g++ -c Entier.cpp

main.o: main.cpp Entier.hpp
	g++ -c main.cpp

clean:
	rm -f *.o Entier main