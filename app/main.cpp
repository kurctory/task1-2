// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#endif

#include <set>
#include <iostream>
#include "lab1.h"

/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */

using namespace std; // чтобы не писать std::

int main()
{
    set <int> S;
    int n;
    cout << "input amount of numbers ";
    cin >> n;
    cout << "input set of numbers ";
    if_exist(n, S);

    return 0;
}
