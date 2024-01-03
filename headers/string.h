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
   string(long long size);
   string& operator = (const string &source);
   ~string();

  string operator +(const string &source);
  bool operator ==(const string &source);
  bool operator !=(const string &source);
  char operator [](int index);

  string& operator +=(const string &source);

  friend std::istream& operator>>(std::istream& in, string &source);
  friend std::ostream& operator<<(std::ostream& out, string &source);

  int get_len(){return this-> string_length;}
  int length(){return this->string_length;}

  char* begin(){return this->string_letters;}
  char* end(){return this->string_letters + this->string_length;}


  char at(int index);
  char back();
  char front();
  bool empty();
  void erase(int index = 0);
  void append(const string &source);
  void push_back(const char c);
  string& assign(const string &source);
  void replace(int index, const string &source);
  void insert(int index, const string &source);
  void pop_back();
  
};

}






#endif
