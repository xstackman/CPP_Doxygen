#include <iostream>
#include "RFPackage.h"
using namespace std;

int main()
{
    cout << "Lets create a new RF package" << endl;
    RFPackage package = RFPackage("first", 123);
    cout << "The package: " << package.getName() << " - " << package.getCode() <<endl;
}