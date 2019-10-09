# assignment 1 makefile

# compile and link
all: Test

# run app
run: Test
	./Test

# link test.o to test executable
Test: Test.o
	g++ -g -o Test Test.o

# compile test.cpp to test.o
test.o: Test.cpp
	g++ -g -c Test.cpp

# remove built files
clean:
	rm -rf Test Test.o *~