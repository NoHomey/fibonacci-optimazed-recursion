compile=g++ -std=c++11 -Wall

object-compile=${compile} -c

algorithm=./algorithm/

comparsion=./comparsion/

all: clean comparsion.o
	${compile} ./classic_recursion.o ./iteration.o optimized_recursion.o ./comparsion.o

comparsion.o: classic_recursion.o iteration.o optimized_recursion.o
	${object-compile} ${comparsion}comparsion.cc

classic_recursion.o:
	${object-compile} ${algorithm}classic_recursion.cc

iteration.o:
	${object-compile} ${algorithm}iteration.cc

optimized_recursion.o:
	${object-compile} ${algorithm}optimized_recursion.cc

clean:
	rm -f -R *.o a.out