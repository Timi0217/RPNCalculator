/*  Oluwatimilehin Dayo-Kayode
 *
 *  CalcYouLater − Reverse Polish Notation Arithmetic
 *
 *  RPNCalc.h
 *  Modified By (UTLN): odayok01
 *           On       : 02/15/2017
 *
 */
#ifndef RPNCALC_H_
#define RPNCALC_H_
#include <cstdlib>
#include <fstream>
#include "DoubleStack.h"

using namespace std;

class RPNCalc{
	public:	
	
		/*RPNCalc()
	 	*purpose:n/a
	 	*parameters: none
	 	*return: nothing
 		*/ 	
		RPNCalc();
		
		/*~RPNCalc()
		 *purpose:n/a
		 *parameters: none
 		*return: nothing
 		*/
		~RPNCalc();

		/*run()
 		*purpose:runs the calculator by calling all functions as needed  
 		*parameters: none
 		*return: nothing
 		*/
		void run();
	
		/*print()
 		*purpose: to print out the double at the top of the stack
		 *parameters: none
 		*return: none
 		*/
		void print();

	private:
		//variable to save operations in
		string operation;
	
		/*add()
 		*purpose: definitioon of function to 
 		*add the two most recent doubles on the stack
		*parameters: none
 		*return: none
 		*/
		void add();

		/*subtract()
 		 *purpose:*purpose: definitioon of function to 
 		*add the two most recent doubles on the stack
		 *parameters: none
 		 *return: none
 		 */
		void subtract();


		/*divide()
 		*purpose: definitioon of function to 
 		*divide the two most recent doubles
		*parameters: none
 		*return: none
 		*/
		void divide();


		/*multiply()
 		*purpose:definitioon of function to 
 		*multiply the two most recent doubles on the stack
		*parameters: none
 		*return: none
 		*/
		void multiply();

		//variable to save the value of a string to be converted
		double value;

		/*convertToDouble(string s, double *ptr)
 		*purpose:definition of function that converts a string to a 
 		*double and saves its address in a pointer
 		*parameters:string to be converted and pointer 
 		*to save its address at.
		*return: boolean that tells whether the 
		*string was converted to a double or not
 		*/ 
		bool convertToDouble(string s, double *ptr);
		
		//A variable to save the result of aritrhmetic operations
		double result;

		//an instance of a doublestack class
		DoubleStack stackInstance;

		//variable to save a converted string
		double converted;

		//variable to store the most recent double on the stack
		double first;

		//variable to store the second most recent double on the strack
		double second;

		/*arithmeticOperationa(string operation)
 		 *purpose:definition of function that checks each symbol 
 		 *and performs an operation on them based on its 
		 *the mathematical formula assigned to it
 		 *parameters:operational symbols as strings
		 *return: nothing
		 */
		void arithmeticOperations(string input);
		
		
		/*readFromFile()
		 *purpose: definition of function that
		 *reads in data from a file and performs operations on them as
 		 *specified in said file
 		 *parameters:a file name
 		 *return: nothing
 		 */
		void readFromFile(string file);

};


#endif
