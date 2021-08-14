#include<iostream>
#include<string>

using namespace std;
class RFPackage
{
    private:
        string _name;
        int _code;
    public:
        RFPackage(string name, int code);
        void setName(string name);
        void setCode(int code);
        int getCode();
        string getName();

};