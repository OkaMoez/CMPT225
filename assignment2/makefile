# assignment 1 makefile

# compile and link
all: Test Exp

# run app
run_test: Test
	./Test

# run app
run_exp: Exp
	./Exp

# link test.o to test executable
Test: Test.o
	g++ -g -o Test Test.o

# compile test.cpp to test.o
test.o: Test.cpp
	g++ -g -c Test.cpp

# link Exp.o to Exp executable
Exp: Exp.o
	g++ -g -o Exp Exp.o

# compile Exp.cpp to Exp.o
Exp.o: Exp.cpp
	g++ -g -c Exp.cpp

# remove built files
clean:
	rm -rf Test Test.o Exp Exp.o *~