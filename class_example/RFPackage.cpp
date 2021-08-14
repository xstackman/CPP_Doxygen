#include <iostream>
#include <string>
#include "RFPackage.h"

using namespace std;


RFPackage::RFPackage(string name, int code)
{
    _name = name;
    _code = code;
}
void RFPackage::setName(string name)
{
    _name = name;
}
void RFPackage::setCode(int code)
{
    _code = code;
}
int RFPackage::getCode()
{
    return _code;
}
string RFPackage::getName()
{
    return _name;
}
