#include "/Users/andreiiordache/Documents/GitHub/string-base-implementation/headers/string.h"
#include <iostream>

namespace custom_string {

std::istream& operator>>(std::istream& in, string &source)
{
    char temp;

    source.string_length = 0;
    source.string_letters = new char[source.string_length + 1];

    while(in.peek() != '\n' && in >> temp)
    {
        source.string_length++;
        source.string_letters[source.string_length - 1] = temp;
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, string &source)
{


for(int i = 0; i < source.string_length; i++)
{
    out<<(source.string_letters[i]);
}


return out;

}




}