CXX=g++
CXXFLAGS=-g -std=c++11 -Wall
BIN=cepik
TESTBIN=test.out

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

TESTSRC=tests/test.cpp tests/testVehicle.cpp tests/testOwner.cpp
TESTOBJ=tests/test.o tests/testVehicle.o tests/testOwner.o

all: $(OBJ)
	$(CXX) -o $(BIN) $^

%.o: %.c
	$(CXX) $@ -c $<

clean:
	rm -f *.o
	rm -f tests/*.o
	rm -f $(BIN)
	rm -f $(TESTBIN)

test: $(TESTOBJ) all
	$(CXX) -o $(TESTBIN) $^
	@./$(TESTBIN)

run: all
	@./$(BIN)