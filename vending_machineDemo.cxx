
// FILE: vending_machineDemo.cxx

#include <iostream> // Provides ostream and istream
#include <cstdlib> // Provides ostream and istream
#include "vending_machine.h"
using namespace std;
using namespace csci2270_assignmentOne;

	int main( )
	{
	    vending_machine a(10, 25);
	    for (int i = 0; i < vending_machine::CAPACITY; i += 3)
		a.set_slot_cost(i, 25);
	    for (int i = 1; i < vending_machine::CAPACITY; i += 3)
		a.set_slot_cost(i, 50);
	    for (int i = 2; i < vending_machine::CAPACITY; i += 3)
		a.set_slot_cost(i, 75);
	    for (int i = 0; i < vending_machine::CAPACITY; i++)
		a.replenish_slot(i, 10);
	    a.add_money(10, 20, 30);
	    cout << a << endl;

	    cout << endl;
	    a.insert_coin(5);
	    a.insert_coin(10);
	    a.insert_coin(25);
	    a.insert_coin(5);
	    a.insert_coin(25);
	    cout << a << endl;

	    cout << endl;
	    a.dispense_an_item(13);
	    cout << a << endl;

	    cout << endl;
	    size_t n=0, d=0, q=0;
	    a.return_change(n, d, q);
	    cout <<"Change returned (n, d, q) = " << n << d << q << endl;
	    cout << a <<endl;

	    cout << endl;
	    a.insert_coin(25);
	    a.insert_coin(5);
	    a.insert_coin(10);
	    a.insert_coin(10);
	    n=0; d=0; q=0;
	    a.return_change(n, d, q);
	    cout <<"Change returned (n, d, q) = " << n << d << q << endl;
	    cout << a <<endl;
	    

	    cout << endl;
	    a.insert_coin(25);
	    a.insert_coin(5);
	    a.insert_coin(10);
	    a.insert_coin(10);
	    a.insert_coin(25);
	    a.insert_coin(25);
	    a.insert_coin(25);
	    a.insert_coin(25);
	    a.insert_coin(25);
	    a.insert_coin(25);
	    a.insert_coin(5);
	    a.insert_coin(5);
	    a.insert_coin(10);
	    cout << a <<endl;
	    a.dispense_an_item(7);
	    a.dispense_an_item(7);
	    a.dispense_an_item(7);
	    cout << a <<endl;
	    n=0; d=0; q=0;
	    a.return_change(n, d, q);
	    cout <<"Change returned (n, d, q) = " << n << d << q << endl;

	    cout << endl;
	    a.empty_slot(8);
	    cout << a <<endl;

	    a.replenish_slot(8, 5);
	    cout << a <<endl;

	    a.empty_money( );
	    cout << a <<endl;

	    a.insert_coin(10);
	    a.insert_coin(10);
	    a.insert_coin(10);
	    a.insert_coin(10);
	    a.insert_coin(10);
	    a.insert_coin(10);
	    a.insert_coin(10);
	    a.insert_coin(10);
	    a.insert_coin(10);
	    cout << a <<endl;
	    a.dispense_an_item(3);
	    cout << a <<endl;
	    n=0; d=0; q=0;
	    a.return_change(n, d, q);
	    cout <<"Change returned (n, d, q) = " << n << d << q << endl;
	    cout << a <<endl;

	    return EXIT_SUCCESS;
	}

