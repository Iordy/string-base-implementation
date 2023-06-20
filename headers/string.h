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
   string(char* begin, char* end);
   string& operator = (const string &source);
   ~string();

  string operator +(const string &source);
  bool operator ==(const string &source);
  bool operator !=(const string &source);

  string& operator +=(const string &source);

  friend std::istream& operator>>(std::istream& in, string &source);
  friend std::ostream& operator<<(std::ostream& out, string &source);

  int get_len(){return this-> string_length;}
  int length(){return this->string_length;}

  char* begin(){return this->string_letters;}
  char* end(){return this->string_letters + this->string_length;}





};

}






#endif
