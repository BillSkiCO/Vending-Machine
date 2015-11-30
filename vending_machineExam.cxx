
// FILE: vending_machineExam.cxx

#include <iostream> // Provides ostream and istream
#include <cstdlib> // Provides ostream and istream
#include "vending_machine.h"
using namespace std;
using namespace csci2270_assignmentOne;

	int main( )
	{
	    vending_machine drinks(15, 60);
	    cout << "Dispense from slot -1: return value = " 
                 << drinks.dispense_an_item(-1) << endl;
	    cout << "Dispense from slot 0: return value = " 
                 << drinks.dispense_an_item(0) << endl;
	    cout << "Dispense from slot 20: return value = "
                 << drinks.dispense_an_item(20) << endl;
	    cout << "Dispense from slot 21: return value = " 
                 << drinks.dispense_an_item(21) << endl;
	    cout << "Dispense from slot 1: return value = " 
                 << drinks.dispense_an_item(1) << endl;
	    for (int i = 0; i < vending_machine::CAPACITY; i += 4)
		drinks.set_slot_cost(i, 25);
	    for (int i = 1; i < vending_machine::CAPACITY; i += 4)
		drinks.set_slot_cost(i, 45);
	    for (int i = 2; i < vending_machine::CAPACITY; i += 4)
		drinks.set_slot_cost(i, 65);
	    for (int i = 3; i < vending_machine::CAPACITY; i += 4)
		drinks.set_slot_cost(i, 75);

	    for (int i = 0; i < vending_machine::CAPACITY; i++)
		drinks.replenish_slot(i, 10+i);

	    drinks.add_money(10, 20, 30);
	    cout << "The current state of vending machine Drinks is as follows"
                 << endl;
	    cout << drinks << endl;

	    cout << endl;


	    drinks.insert_coin(5);
	    drinks.insert_coin(5);
	    drinks.insert_coin(10);
	    drinks.insert_coin(25);
	    drinks.insert_coin(5);
	    drinks.insert_coin(25);		    	    	               	    drinks.insert_coin(7); 			                  	    drinks.insert_coin(8);


		
	    cout << "Dispense from slot 13: return value = " 
                 << drinks.dispense_an_item(13) << endl;
	    cout << "Dispense from slot 11: return value = " 
                 << drinks.dispense_an_item(11) << endl;
	    cout << "Dispense from slot 4: return value = " 
                 << drinks.dispense_an_item(4) << endl;
	    
	    cout << "The current state of vending machine Drinks 				is as follows"
                 << endl;
	    cout << drinks << endl;

	    cout << endl;
	    cout << "Current balance in the vending machine is = "
                 << drinks.get_balance( ) << endl;
	    cout << "Current customer balance is = "
                 << drinks.get_c_balance( ) << endl;
	    cout << endl;



	    drinks.insert_coin(5);
	    drinks.insert_coin(5);
		
	    cout << "Dispense from slot 10: return value = " 
                 << drinks.dispense_an_item(10) << endl;


	    cout << "The current state of vending machine Drinks is as follows"
                 << endl;
	    cout << drinks << endl;

	    cout << endl;
	    cout << "Current balance in the vending machine is = "
                 << drinks.get_balance( ) << endl;
	    cout << "Current customer balance is = "
                 << drinks.get_c_balance( ) << endl;
	    cout << endl;

	    size_t n=0, d=0, q=0;
	    drinks.return_change(n, d, q);
	    cout << endl;
	    cout <<"Change returned (n, d, q) = " << n << d << q << endl;
	    cout << endl;

	    drinks.insert_coin(5);
	    drinks.insert_coin(5);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(7);

	    n=0; d=0; q=0;
	    drinks.return_change(n, d, q);
	    cout << endl;
	    cout <<"Change returned (n, d, q) = " << n << d << q << endl;
	    cout << endl;

	    drinks.empty_slot(10);
            drinks.remove_item(12, 11);

	    drinks.insert_coin(25);
	    drinks.insert_coin(25);
	    drinks.insert_coin(25);
	    drinks.insert_coin(25);
	    drinks.insert_coin(25);
	    drinks.insert_coin(25);
	    drinks.insert_coin(25);
	    drinks.insert_coin(25);
	    drinks.insert_coin(25);
	    drinks.insert_coin(5);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);

	    cout << "Dispense from slot 10: return value = " 
                 << drinks.dispense_an_item(10) << endl;
	    cout << "Dispense from slot 12: return value = " 
                 << drinks.dispense_an_item(12) << endl;
	    cout << "Dispense from slot 12: return value = " 
                 << drinks.dispense_an_item(12) << endl;
	    cout << "Dispense from slot 13: return value = " 
                 << drinks.dispense_an_item(13) << endl;

	    cout << endl;
	    cout << "The current state of vending machine Drinks is as follows"
                 << endl;
	    cout << drinks << endl;
	    cout << "remove_item from slot -1: return value:" << drinks.remove_item(-1, 100) << endl;
	    cout << "remove_item from slot 0: return value:" << drinks.remove_item(0, 100) << endl;
	    cout << "remove_item from slot 20: return value:" << drinks.remove_item(20, 100) << endl;
	    cout << "remove_item from slot 21: return value:" << drinks.remove_item(21, 100) << endl;
	    cout << "remove_item from slot 10: return value:" << drinks.remove_item(10, 100) << endl;

	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
		
	    n=0; d=0; q=0;
	    drinks.return_change(n, d, q);
	    cout << endl;
	    cout <<"Change returned (n, d, q) = " << n << d << q << endl;
	    cout << endl;

	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.empty_money( );
	    n=0; d=0; q=0;
	    drinks.return_change(n, d, q);
	    cout << endl;
	    cout <<"Change returned (n, d, q) = " << n << d << q << endl;
	    cout << endl;

	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);
	    drinks.insert_coin(10);

	    drinks.dispense_an_item(3);
	   
	    n=0; d=0; q=0;
	    drinks.return_change(n, d, q);
	    cout <<"Change returned (n, d, q) = " << n << d << q << endl;
	    cout << "Money owed to the customers is " 
                 << drinks. get_money_owed( ) << endl;

	    drinks.reset_money_owed( );

	    cout << endl;
	    cout << "The current state of vending machine Drinks is as follows"
                 << endl;
	    cout << drinks << endl;
	    cout << endl;

	    return EXIT_SUCCESS;
	}

