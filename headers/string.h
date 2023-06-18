#ifndef STRING
#define STRING

#include <iostream>

namespace custom_string{

class string 
{
    protected:
    char* string_letters;
    int string_length;

    public:

   string();
   string(char letters[]);
   string(const string &source);
   string& operator = (const string &source);
   ~string();

  friend std::istream& operator>>(std::istream& in, string &source);
  friend std::ostream& operator<<(std::ostream& out, string &source);

  int get_len(){return this-> string_length;}


};

}






#endif
