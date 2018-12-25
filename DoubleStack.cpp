/*  Oluwatimilehin Dayo-Kayode
 *
 *  CalcYouLater − Reverse Polish Notation Arithmetic
 *
 *  DoubleStack.cpp
 *  Modified By (UTLN): odayok01
 *           On       : 0/15/2017
 *
 */
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

#include "DoubleStack.h"

/*DoubleStack()
 *purpose:declares and initializes an empty sequence
 *with an initial capacity of zero.
 *parameters: none
 *return: nothing
 */ 
DoubleStack::DoubleStack(){
	stackPtr = new double[1];
	currentSize = 0;
	capacity = 1;
	front = 0;
}

/*DoubleStack(double array[], int x)
 *purpose: declares and initializes a sequence with a given set of doubles
 *and capacity that is the length of the array
 *parameters: a double array and an integer length of the array
 *return: nothing
 */
DoubleStack::DoubleStack(double array[], int x){
	stackPtr = new double[x];
	for(int i = 0; i < x; i++)
	{
		stackPtr[i] = array[i];
	}
	currentSize = x;
	capacity = x;
	front = 0;
}

/*~DoubleStack
 *purpose: deletes allocated memory on the heap used by the program
 *parameters: nothing
 *returns: nothing
 */
DoubleStack::~DoubleStack(){
	delete [] stackPtr;
	currentSize = capacity = 0;
	stackPtr = NULL;
}

/*isEmpty()
 *purpose: checks whether the is empty or not
 *parameters: none
 *return: a boolean value
 */
bool DoubleStack::isEmpty(){
	if (stackPtr == NULL){
		return true;
	}

	if (currentSize == 0)
		return true;
	else{
		return false;
	}
}

/*clear()
 *purpose: converts a given stack into an empty stack
 *parameters: nothing
 */
void DoubleStack::clear(){
	delete [] stackPtr;
	currentSize = 0;
	capacity = 0;
	stackPtr = NULL;
}


/*size()
 *purpose: returns an integer value that is the 
 *number of doubles in the stack
 *in a given sequence
 *parameters: none
 *return: nothing
 */
int DoubleStack::size(){
	return currentSize;
}

/*top()
 *purpose: To return the most recent double put in a given stack
 *parameters: none
 *return: double that is the most recently put in the given stack
 */
double DoubleStack::top(){
	if (isEmpty() == true){
		throw runtime_error("empty_stack");
	}

	return stackPtr[currentSize - 1];
}

/*pop()
 *purpose: To remove the most recent double put in a given stack
 *parameters: none
 *return: none
 */
void DoubleStack::pop(){
	if (isEmpty() == true){
		throw runtime_error("empty_stack");
	}

	currentSize -= 1;
}

/*push(double x)
 *purpose: insert a character after the last character in a sequence
 *parameters: a double
 *return: none
 */
void DoubleStack::push(double x){
	if (currentSize == capacity){
		Expand();
	}
	
	stackPtr[currentSize] = x;
	currentSize += 1;
}

/*expand()
 *purpose: to expand the capacity of a sequence
 *parameters: none
 *return: none
 */
void DoubleStack::Expand()
{

    double *temp = new double[(capacity*2) + 2];
    for (int i = 0; i < capacity; i++)
         temp[i]=stackPtr[i];
    delete [] stackPtr;
    stackPtr = temp;
    capacity = (capacity * 2) + 2;
     
}

/*print()
 *purpose: to print out the characters in a given sequence
 *parameters: none
 *return: none
 */
void DoubleStack::print(){
	cout << "[Stack of size " << currentSize <<" "
	<<"<<";

	for (int i = 0; i < currentSize; i++){
		cout << stackPtr[i];	
		cout << ", ";
	}
	
	cout << ">>]" << endl;

}



