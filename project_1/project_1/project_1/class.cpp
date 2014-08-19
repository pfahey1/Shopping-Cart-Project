#include <iostream>
#include <iomanip>
#include "class.h" // includes the prototypes
using namespace std;

ShoppingCart::ShoppingCart() //constructo intializes the private variables 
{
	m_totalPrice = 0.00; // intializes the total price
	m_total_trans_count = 0; // intializes the total transactions
}

void ShoppingCart::addItem(int quantity, int productID) //calculates total price and transaction count using a switch statement
{
	switch (productID) // allows price checking for each product
	{
	case 1: //product 1
		 m_totalPrice += 2.98 * quantity;
		  m_total_trans_count++;
		break;
		

	case 2: // product 2
		 m_totalPrice += 4.50 * quantity;
		  m_total_trans_count++;
		break;
		

	case 3: //product 3
		 m_totalPrice += 9.98 * quantity;
		  m_total_trans_count++;
		break;
		

	case 4: //product 4
		 m_totalPrice += 4.49 * quantity;
		  m_total_trans_count++;
		break;
		

	case 5: // product 5
		 m_totalPrice += 6.87 * quantity;
		 m_total_trans_count++;
		break;

	}
}

void ShoppingCart::showTotal() // displays the total price and total transactions that were determined in the additem function
{
	cout << "The total price from all the products is: " << "$" << fixed << setprecision(2) << m_totalPrice  << endl;
	cout << "The total count of transactions processed is: " << m_total_trans_count << endl;
}



		


