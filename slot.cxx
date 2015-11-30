// FILE: slot.cxx

#include <iostream>
#include <cstdlib> 
#include "slot.h"
using namespace std;

namespace csci2270_assignmentOne
{          
	slot::slot()
	{
            id = cost = capacity = count = 0;
	}

	slot::slot(int slot_id, size_t price, size_t max)
	{
            id = slot_id;
            cost = price;
            capacity = max;
            count = 0;
	}

        bool slot::dispense_an_item( )
	{
	    if (count == 0) return false;
	    count--;
	    return true;
	}

	size_t slot::remove_item (size_t rem)
	{
	    if (rem <= count) {
	        count -= rem;
		return rem;
	    }
	    int ret = count;
	    count = 0;
	    return ret;
	}

	size_t slot::replenish_slot (size_t new_count)
	{
	    if ((count + new_count) <= capacity) {
                count += new_count;
                return new_count;
            }
            else {
	        size_t rem = capacity - count;
		count = capacity;
		return rem;
            }
        }

	ostream& operator <<(ostream& outs, const slot& source)
        // Library facilities used: iostream
    	{
            outs << "Item Id = " << source.id << "; Cost = " << source.cost
	       	 << "; Capacity = " << source.capacity << "; Count = "
                 << source.count << endl;
            return outs;
    	}

}

