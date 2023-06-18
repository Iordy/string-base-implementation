#include "/Users/andreiiordache/Documents/GitHub/string-base-implementation/headers/string.h"
#include <iostream>

namespace custom_string {

std::istream& operator>>(std::istream& in, string &source)
{

in>>*(source.string_letters);
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