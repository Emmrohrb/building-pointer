// ConsoleApplication32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" // libraries
#include <iostream> // libraries
#include <string>   // libraries 

using namespace std;

void passByReference(string *x);
void recivepointer(int * const mypointer, int  * const pointer2);
int main()
{
	int building = 3;       // date for building start
	int building2;            // date for finishing 
	int building3 = 4;       // date for building start
	int building4 = 5;      // date for finishing
	int building5 = 6;     // date for building start
	int building6 = 7;    // date for finishing

	int * mypointer; // pointer 

	string * pointer2 = 4/7/2019; // pointer containing the date for building2 

	

	mypointer = &building2;
	*mypointer = 2;

	// Incorrect date that is fixed by pointer
	string pointer = "4/0/2019";

	// Pointer passed by reference giving direct access to pointer variable
	passByReference(&pointer);

	cout << "Building month start date is " << pointer << "." << endl;
	system("pause");
	system("cls");

	cout << "We are building buildings, the starting date is for the month " << building << ".\n";
	system("pause");
	
	cout << "building finish date is " << building2 << ".\n";
	system("pause");
	
	cout << "building two construction start date month is " << building3 << ".\n";
	system("pause");
	
	cout << "building two finish date month is " << building4 << ".\n";
	system("pause");
	
	cout << "building three construction start date month is " << building5 << ".\n";
	system("pause");
	
	cout << "building three finish date month is " << building6 << ".\n";
	system("pause");

	return 0;

}

void passByReference(string *x)
{
	// Correct date that is passed by reference
	*x = "4"; // pointer value
}

void recivepointer(int * const mypointer, int  * const pointer2)
{
	int temp = *mypointer; // passing the pointer 
	*mypointer = *pointer2;
	*pointer2 = temp;

}
