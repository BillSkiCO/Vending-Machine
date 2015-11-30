// FILE: slotDemo.cxx

#include <iostream> // Provides ostream and istream
#include <cstdlib> // Provides ostream and istream
#include "slot.h"
using namespace std;
using namespace csci2270_assignmentOne;

	int main( )
	{
	    slot a(0, 25, 15);
	    slot b(1, 50, 5);
	    slot c(2, 75, 3);
	    slot d(3, 25, 10);
	    slot e(4, 40, 7);
	    slot f;

	    cout << a << b << c << d << e << f << endl;

	    cout << "a.id = " << a.get_id() << endl;
	    cout << "b.count = " << b.get_count() << endl;
	    cout << "c.capacity = " << c.get_capacity() << endl;
	    cout << "d.space = " << d.get_available_space() << endl;
	    cout << "e.cost = " << e.get_cost() << endl;
	    cout << "f.count = " << f.get_count() << endl;

	    cout << a << b << c << d << e << f << endl;

	    cout << a.replenish_slot(15) << " items added in a" << endl;
	    cout << b.replenish_slot(10) << " items added in b" << endl;
	    cout << c.replenish_slot(3) << " items added in c" << endl;
	    cout << d.replenish_slot(25) << " items added in d" << endl;
	    cout << e.replenish_slot(22) << " items added in e" << endl;
	    cout << f.replenish_slot(15) << " items added in f" << endl;

	    cout << a << b << c << d << e << f << endl;

	    if (!a.dispense_an_item( )) cout << "Item a not available" << endl;
	    else cout << "One item a got dispensed" << endl;
	    if (!a.dispense_an_item( )) cout << "Item a not available" << endl;
	    else cout << "One item a got dispensed" << endl;
	    if (!a.dispense_an_item( )) cout << "Item a not available" << endl;
	    else cout << "One item a got dispensed" << endl;
	    if (!a.dispense_an_item( )) cout << "Item a not available" << endl;
	    else cout << "One item a got dispensed" << endl;
	    if (!a.dispense_an_item( )) cout << "Item a not available" << endl;
	    else cout << "One item a got dispensed" << endl;
	    if (!a.dispense_an_item( )) cout << "Item a not available" << endl;
	    else cout << "One item a got dispensed" << endl;

	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;

            cout << "a.id = " << a.get_id() << endl;
            cout << "b.count = " << b.get_count() << endl;
            cout << "c.capacity = " << c.get_capacity() << endl;
            cout << "d.space = " << d.get_available_space() << endl;
            cout << "e.cost = " << e.get_cost() << endl;
            cout << "f.count = " << f.get_count() << endl;

	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;
	    if (!b.dispense_an_item( )) cout << "Item b not available" << endl;
	    else cout << "One item b got dispensed" << endl;


	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;
	    if (!c.dispense_an_item( )) cout << "Item c not available" << endl;
	    else cout << "One item c got dispensed" << endl;

	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;
	    if (!d.dispense_an_item( )) cout << "Item d not available" << endl;
	    else cout << "One item d got dispensed" << endl;

	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;
	    if (!e.dispense_an_item( )) cout << "Item e not available" << endl;
	    else cout << "One item e got dispensed" << endl;

	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;
	    if (!f.dispense_an_item( )) cout << "Item f not available" << endl;
	    else cout << "One item f got dispensed" << endl;

            cout << a << b << c << d << e << f << endl;

	    return EXIT_SUCCESS;
	}

