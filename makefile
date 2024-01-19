all: runMovies

runMovies: movies.h movies.cpp main.cpp
	g++ -std=c++11 -O2 main.cpp movies.cpp -o runMovies -march=native

clean:
	rm -f *.o
	rm -f test
