// FILE: slot.h 
//
// CLASS PROVIDED: slot (an ADT for storing items of the same type in a 
//			 vending machine)
//
// CONSTRUCTOR for the slot class:
//	slot ( );
//	Postcondition: The slot has been set to id = 0; cost = 0; count = 0; 
//	               and capacity = 0.
//	slot (int slot_id, size_t price, size_t max);
//	Postcondition: The slot has been set to id = slot_id; cost = price;
//                     count = 0; and capacity = max.
//
// MODIFICATION MEMBER FUNCTIONS for the slot class:
//	void set_cost(size_t price) 
//	Postcondition: cost is set to price
//
//	void set_id(int slot_id) 
//	Postcondition: id is set to slot_id
//
//	void set_capacity(size_t max) 
//	Postcondition: capacity is set to max
//
//      bool dispense_an_item( );
//	Postcondition: returns true and count is decremented if count > 0
//	               otherwise retuns false
//
//	size_t replenish_slot (size_t new_count);
//	Postcondition: The slot is filled with either new_count new items or
//		       to completion, whichever is smaller. The number of new
//		       items added is returned
//
//	size_t remove_item (size_t rem);
//	Postcondition: Either rem items are removed from the slot, or the
//  		       slot is emptied, whichever is smaller. The number of
//		       items removed is returned.
//
//	void empty_slot () 
//	Postcondition: count is set to zero
//
// CONSTANT MEMBER FUNCTIONS for the slot class:
//	int get_id ( ) const 
//	Postcondition: slot id is returned
//
//      size_t get_cost ( ) const 
//	Postcondition: cost is returned
//
//      size_t get_count( ) const 
//	Postcondition: count is returned
//
//      size_t get_capacity ( ) const 
//	Postcondition: capacity is returned`
//
//	size_t get_available_space( ) const
//	Postcondition: Number of empty spaces is returned
//
// FRIEND FUNCTION
//	overload << to print the current state of the slot

#include <iostream> // Provides ostream and istream
#include <cstdlib> 
using namespace std;

namespace csci2270_assignmentOne
{          
    class slot
    {
    public:
        // CONSTRUCTOR
	slot ( );
	slot (int slot_id, size_t price, size_t max);
        // MODIFICATION MEMBER FUNCTIONS
	void set_cost(size_t price) {cost = price;}
	void set_id(int slot_id) {id = slot_id;}
	void set_capacity(size_t max) {capacity = max;}
        bool dispense_an_item( );
	size_t replenish_slot (size_t new_count);
	size_t remove_item (size_t rem);
	void empty_slot () {count = 0;}
//	 CONSTANT MEMBER FUNCTIONS
	int get_id ( ) const {return id;}
        size_t get_cost ( ) const { return cost; }
        size_t get_count( ) const {return count;}
        size_t get_capacity ( ) const { return capacity; }
	size_t get_available_space( ) { return (capacity - count); }
        friend ostream& operator <<(ostream& outs, const slot& target);
    private:
	int id; //Id of the slot
	size_t cost; //Cost of one item in cents
	size_t capacity; //Maximum number of items that can be stored
	size_t count; // Number of items currently available
    };
}

