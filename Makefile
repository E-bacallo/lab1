#edgar bacallo
#
all: lab1

clean:
	rm -f lab1  

lab1: lab1.cpp
	g++ -Wall -o lab1 lab1.cpp 
