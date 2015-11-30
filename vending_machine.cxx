// FILE: vending_machine.cxx
// Written by Bill Golembieski


#include <iostream> // Provides ostream and istream
#include <cstdlib>
#include "vending_machine.h"
using namespace std;

namespace csci2270_assignmentOne
{
    vending_machine :: vending_machine (size_t slot_size, size_t price)
    {
        id = nickles = dimes = quarters = c_nickles = c_dimes = c_quarters = c_balance = money_owed = 0;

        for(int i = 0; i < 20; i++)
        {
            slots[i].set_id(i);
            slots[i].set_capacity(slot_size);
            replenish_slot(i, slot_size);
            set_slot_cost(i, price);

        }
    }

    int vending_machine :: set_slot_cost(int slot_id, size_t price)
    {
        if( slot_id >= 0 && slot_id < 20)
        {
            slots[slot_id].set_cost(price);

            return 0;
        }

        return -1;
    }

	int vending_machine :: insert_coin(size_t coin)
	{
	    if(coin == 5)
	    {
	        c_nickles++;
	        c_balance += 5;
	        return 0;
	    }
	    else if(coin == 10)
	    {
	        c_dimes++;
	        c_balance += 10;
	        return 0;
	    }
	    else if(coin == 25)
	    {
	        c_quarters++;
	        c_balance += 25;
	        return 0;
	    }

	    return -1;
	}

    int vending_machine :: dispense_an_item(int slot_id)
    {
        if( slot_id < 0 || slot_id >= 20) return -2;
        if(slots[slot_id].get_count() == 0) return -1;
        if(c_balance < slots[slot_id].get_cost()) return 0;
        if( slot_id >= 0 && slot_id < 20)
        {
            remove_item(slot_id, 1);

            c_balance -= slots[slot_id].get_cost();

            add_money(c_nickles, c_dimes, c_quarters);

            c_nickles = 0;
            c_dimes = 0;
            c_quarters = 0;

            return 1;
        }

    }

	int vending_machine :: replenish_slot (int slot_id, size_t new_count)
	{
	    if(slot_id >= 0 && slot_id < 20)
	    {
	        return slots[slot_id].replenish_slot(new_count);
        }
	    return -1;
	}

	int vending_machine :: remove_item(int slot_id, size_t num)
	{
	    if(slot_id >= 0 && slot_id < 20)
	    {
            return slots[slot_id].remove_item(num);
	    }
	    return -1;
    }

	int vending_machine :: empty_slot(int slot_id)
	{
	    if(slot_id >= 0 && slot_id < 20)
	    {
            slots[slot_id].empty_slot();
            return 0;
	    }
	    return -1;
	}

	void vending_machine :: add_money(size_t n, size_t d, size_t q)
	{
	    nickles += n;
	    dimes += d;
	    quarters += q;
	}

	size_t vending_machine :: return_change(size_t& n, size_t& d, size_t& q)
	{
	    if(c_quarters !=0 || c_dimes != 0 || c_nickles !=0)
	    {
	        n = c_nickles;
	        d = c_dimes;
	        q = c_quarters;
	        c_nickles = c_dimes = c_quarters = c_balance = 0;
	        return 0;
	    }

	    q += c_balance/25;
	    while(q>quarters)
	    {
	        q--;
        }
	    c_balance -= q * 25;
	    quarters -= q;


	    d += c_balance/10;
	    while(d>dimes)
	    {
	        d--;
	    }
	    c_balance -= d * 10;
	    dimes -= d;

	    n += c_balance/5;
	    while(n>nickles)
	    {
	        n--;
	    }
        c_balance -= n * 5;
	    nickles -= n;


	    money_owed = c_balance;
	    c_balance = 0;

	    return money_owed;
	}

	size_t vending_machine :: get_balance ( ) const
	{
	    return (((nickles + c_nickles) * 5) + ((dimes + c_dimes) * 10) + ((quarters + c_quarters) * 25));
	}

    ostream& operator <<(ostream& outs, const vending_machine& source)
        // Library facilities used: iostream
    	{
            outs <<"Vending Machine Id = " << source.id << endl << "Numbers of nickels = " << source.nickles << "; Number of dimes = " << source.dimes
            << "; Number of quarters = " << source.quarters << endl << "Number of customer nickels = "
                << source.c_nickles << "; Number of customer dimes = " << source.c_dimes << "; Number of customer quarters = "
                << source.c_quarters << endl << "Customer balance = " << source.c_balance << endl << "Money owed = " << source.money_owed
                << endl << "Number of slots = " << source.CAPACITY << endl;
                for(int i = 0; i< 20; i++)
                {
                    outs<< source.slots[i];
                }

            return outs;
    	}

}
