using namespace std;

class ShoppingCart // class name
{
public:
	ShoppingCart(); // constructor to intialize object
	void addItem(int quantity, int productID);
	void showTotal();

private: //variables that can only be used by additem and show total
	double m_totalPrice; // combined price of all items in the cart
	int m_total_trans_count; // count of transactions processed
}; // end of class definition