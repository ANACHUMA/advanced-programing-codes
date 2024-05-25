#include <iostream>
#include "Derived.h"

using namespace std;

int main() {
    Base* pba = new Derived();
    Base* pbb = new Base();

    Derived* pd;

    pd = dynamic_cast<Derived*>(pba);
    if (pd != nullptr) {
        cout << "Success on first type-cast." << endl;
    } else {
        cout << "Null pointer on first type-cast." << endl;
    }

    pd = dynamic_cast<Derived*>(pbb);
    if (pd != nullptr) {
        cout << "Success on second type-cast." << endl;
    } else {
        cout << "Null pointer on second type-cast." << endl;
    }

    delete pba;
    pba = nullptr;
    delete pbb;
    pbb = nullptr;

    return 0;
}