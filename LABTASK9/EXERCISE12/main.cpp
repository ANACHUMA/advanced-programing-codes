#include <iostream>
#include "Derived.h"

using namespace std;

int main() {
    Base* pBase = new Base();

    // Performing a downcast using static_cast
    Derived* pDerived = static_cast<Derived*>(pBase);
    if (pDerived != nullptr) {
        cout << "Downcast successful." << endl;
    } else {
        cout << "Downcast failed." << endl;
    }

    delete pBase;
    pBase = nullptr;

    return 0;
}