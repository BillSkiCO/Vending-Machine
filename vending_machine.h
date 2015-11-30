// FILE: vending_machine.h 
// CLASS PROVIDED: vending_machine (an ADT for a vending machine)
//
// CONSTRUCTOR for the vending_machine class:
//	vending_machine (size_t slot_size = 10, size_t price = 50);
//      
//
// MODIFICATION MEMBER FUNCTIONS for the vending_machine class:
//	void set_vmid(int vid) 
//	Postcondition: id is set to vid.
//
//	int set_slot_cost(int slot_id, size_t price)
//	Postcondition: returns -1 if invalid slot_id
//		       The cost of the slot is set to price and 0 is
//		       returned otherwise.
//
//	int insert_coin(size_t coin)
//	Postcondition: if coin == 5, 10 or 25, nickles, dimes or quarters is
//		       incremented, and 0 is returned.
//		       If coin != 5, 10 or 25, -1 is returned.
//
//      int dispense_an_item(int slot_id)
//	Postcondition: returns -2 if invalid slot_id
//		       returns -1 if the slot is empty
//		       returns 0 if customer balance (c_balance) < cost of 
//		       the item
//		       Otherwise, slot-count is decremented, c_balance
//		       is reduced by the item cost, all money from
//		       customer money storage is moved to vm money storage,
//		       and 1 is returned
//
//      int replenish_slot (int slot_id, size_t new_count)
//	Postcondition: returns -1 if invalid slot_id
//		       Otherwise, the slot is filled either with new_count
//	   	       items or to the full, whichever is less, and the
//	    	       number of new items added is retruned.
//
//      int remove_item(int slot_id, size_t num)
//	Postcondition: returns -1 if invalid slot_id
//		       Othewise, either num items are removed or the slot
//		       is emptied, whichever is less, and the number of
//		       items removed is returned.
//
//      int empty_slot(int slot_id)
//	Postcondition: returns -1 if invalid slot_id
//	               Otherwise the slot is emptied and 0 is returned
//
//      void add_money(size_t n, size_t d, size_t q);
//	Postcondition: Amount of vm money stoarge is increased.
//		       n nickles, d dimes and q quarters are added to
//		       nickles, dimes and quarters respectively
//
//      void empty_money( ) 
//	Postcondition: vm money storage and customer money storage are
//		       emptied (nickles, c_nickles, dimes, c_dimes, quarters,
//		       and c_quarters are set to 0), and c_balance is set
//		       to 0
//
//      void reset_money_owed( ) 
//	Postcondition: money_owed is set to 0
//
//      size_t return_change(size_t& n, size_t& d, size_t& q)
//	Postcondition: Returns change in the amount of c_balance to 
//		       the customer. n, d, and q are set to the number
//		       of nickles, dimes and quarters returned.
//		       The change is calculated as follows: First all money
//		       in the customer money storage is returned as is. 
//		       Change for the remaining customer balance is returned
//		       in the highest available denominations.
//		       The function returns the amount of customer balance,
//		       which could not be returned due to a lack of required
//		       coins.
//		       
//
// CONSTANT MEMBER FUNCTIONS for the vending_machine class:
//	int get_id ( ) const
//	Postcondition: Returns id
//
//	size_t get_c_balance ( ) const 
//	Postcondition: returns customer balance
//
//	size_t get_balance ( ) const
//	Postcondition: Returns the amount of money in vm money storage
//		       and customer money storage
//
//	size_t get_money_owed ( ) const 
//	Postcondition: Returns money_owed
//
// FRIEND FUNCTION for the vending_machine class:
//	friend ostream& operator <<(ostream& outs,
//                                       const vending_machine& target);
//	Overloads the << operator for vending_machine class
//	Printout looks as follows:
//	
// Number of nickels = x; Number of dimes = y; Number of quarters = z
// Number of customer nickels = a; Number of customer dimes = b; Number of customer quarters = c
// Customer balance = xy
// Money owed = ab
// Number of slots = xx
// <One line for each slot> --->
// Item Id = ; Cost = ; Capacity = ; Count = 
// ...
// Item Id = ; Cost = ; Capacity = ; Count = 
//

#include <iostream> // Provides ostream and istream
#include <cstdlib> // Provides ostream and istream
#include "slot.h"
using namespace std;

namespace csci2270_assignmentOne
{          
    class vending_machine
    {
    public:
	static const size_t CAPACITY = 20;
        // CONSTRUCTOR
	vending_machine (size_t slot_size = 10, size_t price = 50);
        // MODIFICATION MEMBER FUNCTIONS
	void set_vmid(int vid) {id = vid;}
	int set_slot_cost(int slot_id, size_t price);
	int insert_coin(size_t coin);
        int dispense_an_item(int slot_id); 
	int replenish_slot (int slot_id, size_t new_count);
	int remove_item(int slot_id, size_t num);
	int empty_slot(int slot_id);
	void add_money(size_t n, size_t d, size_t q);
	void empty_money( ) {nickles = dimes = quarters = c_nickles
                              = c_dimes = c_quarters = c_balance = 0;}
	void reset_money_owed( ) {money_owed = 0;}
	size_t return_change(size_t& n, size_t& d, size_t& q);
        // CONSTANT MEMBER FUNCTIONS
	int get_id ( ) const {return id;}
	size_t get_c_balance ( ) const {return c_balance;}
        size_t get_balance ( ) const; 
        size_t get_money_owed ( ) const {return money_owed;} 
        friend ostream& operator <<(ostream& outs,
                                         const vending_machine& target);
    private:
	int id; // Id of a vending machine
	slot slots[CAPACITY]; //Slots of the vending machine

	// vm money storage: Storage for money for which items have
	// been purchased
	size_t nickles; // Number of nickles 
	size_t dimes; // Number of dimes
	size_t quarters; // Number of quarters

	// Customer money storage: Storage for customer money for
        // which no items have been purchased
	size_t c_nickles; // Number of nickles
	size_t c_dimes; // Number of dimes
	size_t c_quarters; // Number of quarters

	size_t c_balance; // Customer balance
		          // Note: This may not be same as customer
	  	          // money storage
	size_t money_owed; // Total money owed to customers, which could
			   // not be returned using return_change( )
    };
}

