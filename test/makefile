# test makefile

# compile and link
all: test

# run app
run: test
	./test

# link test.o to test executable
test: test.o
	g++ -g -o test test.o

# compile test.cpp to test.o
test.o: test.cpp
	g++ -g -c test.cpp

# remove built files
clean:
	rm -rf test test.o *~