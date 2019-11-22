# assignment 1 makefile

# compile and link
all: BS1Test BS2Test AVLTest

# run app
run_test1: BS1Test
	./TestBinarySearchTree1

# run app
run_test2: BS2Test
	./TestBinarySearchTree2

# run app
run_test3: AVLTest
	./TestAVLTree

# link TestBinarySearchTree1.o to TestBinarySearchTree1 executable
BS1Test: BS1Test.o
	g++ -g -o TestBinarySearchTree1 TestBinarySearchTree1.o

# compile TestBinarySearchTree1.cpp to TestBinarySearchTree1.o
BS1Test.o: TestBinarySearchTree1.cpp
	g++ -g -c TestBinarySearchTree1.cpp

# link TestBinarySearchTree2.o to TestBinarySearchTree2 executable
BS2Test: BS2Test.o
	g++ -g -o TestBinarySearchTree2 TestBinarySearchTree2.o

# compile TestBinarySearchTree2.cpp to TestBinarySearchTree2.o
BS2Test.o: TestBinarySearchTree2.cpp
	g++ -g -c TestBinarySearchTree2.cpp

# link TestAVLTree.o to TestAVLTree executable
AVLTest: AVLTest.o
	g++ -g -o TestAVLTree TestAVLTree.o

# compile TestBinarySearchTree2.cpp to TestAVLTree.o
AVLTest.o: TestAVLTree.cpp
	g++ -g -c TestAVLTree.cpp

# remove built files
clean:
	rm -rf TestBinarySearchTree1 TestBinarySearchTree1.o TestBinarySearchTree2 TestBinarySearchTree2.o TestAVLTree TestAVLTree.o *~