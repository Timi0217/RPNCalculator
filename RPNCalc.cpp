/*  Oluwatimilehin Dayo-Kayode
 *
 *  CalcYouLater − Reverse Polish Notation Arithmetic
 *
 *  RPNCalc.cpp
 *  Modified By (UTLN): odayok01
 *           On       : 02/15/2017
 *
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include "RPNCalc.h"
#include "DoubleStack.h"

using namespace std;

/*RPNCalc()
 *purpose:n/a
 *parameters: none
 *return: nothing
 */ 
RPNCalc::RPNCalc(){

}

/*~RPNCalc()
 *purpose:n/a
 *parameters: none
 *return: nothing
 */
RPNCalc::~RPNCalc(){

}

/*convertToDouble(string s, double *ptr)
 *purpose:converts a string to a double and saves its address in a pointer
 *parameters:string to be converted and pointer to save its address at.
 *return: boolean that tells whether the string was converted to a double or not
 */ 
bool RPNCalc::convertToDouble(string s, double *ptr){
	return sscanf(s.c_str(), "%lf", ptr) == 1;
}

/*add()
 *purpose:adds the two most recent items on the stack together, pops them off 
 *the stack, and pushes the result to the stack
 *parameters: none
 *return: nothing
 */ 
void RPNCalc::add(){
	first = stackInstance.top();
	stackInstance.pop();
	second = stackInstance.top();
	stackInstance.pop();
	result = first + second;
	stackInstance.push(result);
}

/*subtract()
 *purpose:subtracts the two most recent items on the stack together, pops them off 
 *the stack, and pushes the result to the stack
 *parameters: none
 *return: nothing
 */
void RPNCalc::subtract(){
	first = stackInstance.top();
	stackInstance.pop();
	second = stackInstance.top();
	stackInstance.pop();
	result = first - second;
	stackInstance.push(result);	
}

/*divide()
 *purpose:divides the two most recent items on the stack together, pops them off 
 *the stack, and pushes the result to the stack
 *parameters: none
 *return: nothing
 */
void RPNCalc::divide(){
	first = stackInstance.top();
	stackInstance.pop();
	second = stackInstance.top();
	stackInstance.pop();
	result = first / second;
	stackInstance.push(result);
}

/*multiply()
 *purpose:multipliess the two most recent items on the stack together
 *pops them off 
 *the stack, and pushes the result to the stack
 *parameters: none
 *return: nothing
 */
void RPNCalc::multiply(){
	first = stackInstance.top();
	stackInstance.pop();
	second = stackInstance.top();
	stackInstance.pop();
	result = first * second;
	stackInstance.push(result);
}

/*print()
 *purpose: to print out the double at the top of the stack
 *parameters: none
 *return: none
 */
void RPNCalc::print(){
	double x = stackInstance.top();
	cout << x << endl;
}

/*arithmeticOperationa(string operation)
 *purpose:checks each symbol and performs an operation on them based on its 
 *the mathematical formula assigned to it
 *parameters:operational symbols as strings
 *return: nothing
 */
void RPNCalc::arithmeticOperations(string operation){
	
	if(convertToDouble(operation, &converted)){
			stackInstance.push(converted);
		}
		
	else if (operation == "+"){
		add();
	}

	else if (operation == "-"){
		subtract();
	}

	else if (operation == "/"){
		divide();
	}

	else if (operation == "*"){
		multiply();
	}

	else if (operation == "p" || operation == "P"){
		print();
	}

	else if (operation == "c" || operation == "C"){
		stackInstance.clear();
	}

	else if (operation == "q" || operation == "Q"){
		exit(0);
	}
	
	else if (operation == "f" || operation == "F"){
		cin >> operation;
		readFromFile(operation);
	}
	
	else{
		cerr << operation << ":  unimplemented" << endl;
	}
	
	
	
}

/*readFromFile()
 *purpose: reads in data from a file and performs operations on them as
 *specified in said file
 *parameters:a file name
 *return: nothing
 */
void RPNCalc::readFromFile(string file){
		ifstream instream;
		instream.open(file.c_str());
		
		if(instream.fail()){
		}
		
		else{
			string input;
			for (instream >> input; !instream.eof(); instream >> input){
				if(input == "f" || input == "F"){
					instream >> input;
					readFromFile(input);
				}
				
				else{
					arithmeticOperations(input);
				}
			}
		}
		
		exit(0);
}


/*run()
 *purpose:runs the calculator by calling all functions as needed  
 *parameters: none
 *return: nothing
 */
void RPNCalc::run(){
	while(cin >> operation){
		arithmeticOperations(operation);
	}
}
	


