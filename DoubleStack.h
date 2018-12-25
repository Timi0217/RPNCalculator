/*  Oluwatimilehin Dayo-Kayode
 *
 *  CalcYouLater − Reverse Polish Notation Arithmetic
 *
 *  DoubleStack.h
 *  Modified By (UTLN): odayok01
 *           On       : 02/15/2017
 *
 */
#ifndef DOUBLESTACK_H_
#define DOUBLESTACK_H_

class DoubleStack{

public:
	
	/*DoubleStack()
 	 *purpose:declares function to initialize an empty sequence
 	 *with an initial capacity of zero.
 	 *parameters: none
 	 *return: nothing
 	 */ 
	DoubleStack();


	/*DoubleStack(double array[], int x)
 	 *purpose: declares function to initialize a sequence
 	 *with a given set of doubles
 	 *and capacity that is the length of the array
 	 *parameters: a double array and an integer length of the array
 	 *return: nothing
 	 */
	DoubleStack(double x[], int y);


	/*~DoubleStack
 	 *purpose: declaration of destructor to delete allocated memory
 	 *on the heap used by the program
 	 *parameters: nothing
 	 *returns: nothing
 	 */
	~DoubleStack();


	/*isEmpty()
 	 *purpose: declaration of function that checks whether the 
 	 *stack is empty or not
 	 *parameters: none
 	 *return: a boolean value
	 */
	bool isEmpty();

	/*clear()
 	 *purpose: declares function that converts a 
 	 *given stack into an empty stack
 	 *parameters: nothing
 	 */
	void clear();
	
	/*size()
	 *purpose: declares function that returns an integer value that is the 
 	 *number of doubles in the stack
 	 *in a given sequence
 	 *parameters: none
 	 *return: nothing
 	 */
	int size();

	/*top()
 	 *purpose: declares function to return the most 
 	 *recent double put in a given stack
	 *parameters: none
 	 *return: double that is the most recently put in the given stack
 	 */
	double top();

	/*pop()
   	 *purpose: To remove the most recent double put in a given stack
  	 *parameters: none
 	 *return: none
 	 */
	void pop();

	/*push(double x)
 	 *purpose: insert a character after the last character in a sequence
 	 *parameters: a double
 	 *return: none
	 */
	void push(double x);

	/*expand()
 	 *purpose: to expand the capacity of a sequence
 	 *parameters: none
 	 *return: none
 	 */
	void Expand();

	/*print()
 	 *purpose: to print out the characters in a given sequence
	 *parameters: none
 	 *return: none
 	 */
	void print();
	
	



private:

	//pointer to the stack
	double *stackPtr;

	//variable to track the size of the stack
	int currentSize;

	//variable to track the number of items in the stack
	int capacity;

	//variable to track the first item in the stack
	int front;


};

#endif
