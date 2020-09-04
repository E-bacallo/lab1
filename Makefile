#edgar bacallo
#
all: lab1 test

clean:
	rm -f lab1 test

lab1: lab1.cpp
	g++ -Wall -o lab1 lab1.cpp 

test: lab1.cpp 
	g++ -Wall -o test lab1.cpp -D UNIT_TEST
