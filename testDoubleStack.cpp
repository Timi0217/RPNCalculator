/*  Oluwatimilehin Dayo-Kayode
 *
 *  CalcYouLater − Reverse Polish Notation Arithmetic
 *
 *  testDoubleStack.cpp
 *  Modified By (UTLN): odayok01
 *           On       : 02/15/2017
 *
 */
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

#include "DoubleStack.h"

int main(){

	double test[] = {1.0, 2.5, 3.3, 4.5, 8.2, 4.8,2.2};

	DoubleStack sequence(test, 7);

	
	//cerr << "gets here" << endl;

	//check if isEmpty() function works properly
	if(sequence.isEmpty() == true){
		cout << "Tis Empty" << endl;
	}
	else{
		cout << "It is not empty" << endl;
	}

	int stackSize = sequence.size();
	cout << "Current size is " << stackSize << endl;

	sequence.Expand();

	sequence.print();

	sequence.push(4.3);

	sequence.print();

	sequence.pop();

	sequence.print();

	double x = sequence.top();

	cout << x;

return 0;
}
