#include "std_lib_facilities.h"

int main()
{
    double value1;
    double value2;
    string operation;
    cout<<"Please enter the operation you wish to solve in the format \"operation\" \"first value\" \"second value\" (\"operation\" needs to be one of \"+, -, / or *\"):\n";
    cin>>operation>>value1>>value2;

    //if statement for addition case
    if(operation == "+")
    {
        cout<<"\n"<<value1+value2;
    }

    else if(operation == "-") //if statement for substraction case
    {
        cout<<"\n"<<value1-value2;
    }

    else if(operation == "*") //if statement for multiplication case
    {
        cout<<"\n"<<value1*value2;
    }

    else if(operation == "/") //if statement for division case
    {
        cout<<"\n"<<value1/value2;
    }

    return 0;
}