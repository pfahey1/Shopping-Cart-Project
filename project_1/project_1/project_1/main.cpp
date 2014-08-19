/*
Program Name: Shopping Cart Calculator

Description: A program that takes the quantity of 5 different items from a data file and calculates the cost of the item and the items all together

Author: Paul Fahey

Date: 2/28/11

Modification History: none
*/

#include <iostream>
#include <fstream> // allows file streaming in the program
#include "class.h" // includes the class definiton
using namespace std;


int main(int argc, char *argv[]) //arguements for allowing file usage in the program  
{
	ShoppingCart myShoppingCart; // constructor creates an object
	
	ifstream inDataFile( argv[1], ios::in); // file object that is created to take in the file for input

	if (!inDataFile) // if its not the project_1[1].dat file
	{
		cout << "File could not be Opened\a" << endl; 
		return 0; //program terminates
	}

	//variables created for the file and additem to take in properly
	int quant;
	int proID;

	while (inDataFile >> proID >> quant) // loop takes in the file which takes in two variables as its contents
	{
		myShoppingCart.addItem(quant, proID); // calls additem to look up the productid and quanity and calculates the total price
	}

	myShoppingCart.showTotal(); // showtotal is called to display the total price of the file contents and total transactions
}


	


	
	

	
