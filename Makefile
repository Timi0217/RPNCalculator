#  Oluwatimilehin Dayo-Kayode
#
#  CalcYouLater − Reverse Polish Notation Arithmetic
#
#  MakeFile
#  Modified By (UTLN): odayok01
#           On       : 0/15/2017
#


CXX      = clang++
CXXFLAGS = -g3 -Wall -Wextra -std=c++11
LDFLAGS  = -g3



testDoubleStack: testRPNCalc.o RPNCalc.o DoubleStack.o
	${CXX} ${LDFLAGS} -o testRPNCalc testRPNCalc.o RPNCalc.o\
                DoubleStack.o


testRPNCalc.o: testRPNCalc.cpp RPNCalc.h
RPNCalc.o:        RPNCalc.cpp        RPNCalc.h  
DoubleStack.o: DoubleStack.cpp        DoubleStack.h



clean:
	rm -rf testRPNCalc *.o *.dSYM


provide:
	provide comp15 hw3 testRPNCalc.cpp RPNCalc.cpp RPNCalc.h \
   	DoubleStack.h DoubleStack.cpp \
    	testDoubleStack.cpp README Makefile
