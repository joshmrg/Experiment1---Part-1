#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int box;
	int sideline;
	int premium;
	int genad;
	cout << "                   Ticket Price            No. of Ticket Sold      " << endl;
	cout << "Box                    $250.00                   "; cin >> box; cout << "Total for BOX area is $" << 250 * box << ".00." << endl << endl;
	cout << "Sideline               $100.00                   "; cin >> sideline; cout << "Total for SIDELINE area is $"<< 100 * sideline << ".00." << endl << endl;
	cout << "Premium                $50.00                   "; cin >> premium; cout << "Total for PREMIUM area is $"<< 50 * premium << ".00." << endl << endl;
	cout << "GenAd                  $25.00                   "; cin >> genad; cout << "Total fore GENAD area is $"<< 25 * genad << ".00." << endl << endl << endl;
	cout << "The total sales for this game is $" << 250*box + 100*sideline + 50*premium + 25*genad << ".00." <<endl;

_getch();
return 0;
}