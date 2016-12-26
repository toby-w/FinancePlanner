XX = g++-5
CXXFLAGS = -std=c++14 -Wall -Werror=vla -g
OBJECTS = FinanceNode.o FinanceTree.o FinanceTreeDelegate.o main.o
DEPENDS = ${OBJECTS:.o=.d}
EXEC = FinancePlanner

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm *.o ${EXEC}
