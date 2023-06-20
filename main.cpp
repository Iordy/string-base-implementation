#include <iostream>

#include "/Users/andreiiordache/Documents/GitHub/string-base-implementation/headers/string.h"


using namespace std;

using namespace custom_string;

int main()
{
    

    custom_string::string test("andrei");

    cin>>test;

    custom_string::string test2(test.begin(), test.begin() + 3);

    cout<<test2<<endl;

    cout<<endl<<test2.length()<<endl;


    

    return 0;
}